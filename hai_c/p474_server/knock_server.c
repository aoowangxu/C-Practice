/*************************************************************************
	> File Name: knock_server.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Apr 2016 11:46:52 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<signal.h>

void error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

int open_listener_socket()
{
    int s = socket(PF_INET, SOCK_STREAM, 0);
    if(-1 == s)
    {
        error("can't open socket");
    }
    return 0;
}

void bind_to_port(int socket, int port)
{
    struct sockaddr_in name;
    name.sin_family = PF_INET;
    name.sin_port = (in_port_t)htons(30000);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    int reuse = 1;
    if(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (char *)&reuse, sizeof(int)) == -1)
    {
        error("can't set the reuse option on the socket");
    }

    int c = bind(socket, (struct sockaddr *) &name, sizeof(name));
    if(-1 == c)
    {
        error("can't bind to socket");
    }
}

int say(int socket, char *s)
{
    int result = send(socket, s, strlen(s), 0);
    if(-1 == result)
    {
        fprintf(stderr, "%s: %s\n", "和客户端通信时发生错误", strerror(errno));
    }
    return result;
}

int catch_signal(int sig, void (*handler)(int))
{
    struct sigaction action;
    action.sa_handler = handler;
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    return sigaction(sig, &action, NULL);
}

int read_in(int socket, char *buf, int len)
{
    char *s = buf;
    int slen = len;
    int c = recv(socket, s, slen, 0);
    while((c > 0) && (s[c-1] != '\n'))
    {
        s += c;
        slen -= c;
        c = recv(socket, s, slen, 0);
    }

    if(c < 0)
    {
        return c;
    }
    else if(0 == c)
    {
        buf[0] = '\0';
    }
    else
    {
        s[c-1] = '\0';
    }

    return len - slen;
}


int listener_d;
void handle_shutdown(int sig)
{
    if(listener_d)
    {
        close(listener_d);
    }
    fprintf(stderr, "Bye!\n");
    exit(0);
}

int main()
{
    if(catch_signal(SIGINT, handle_shutdown) == -1)
    {
        error("can't set the inetrrupt handler");
    }

    listener_d = open_listener_socket();
    bind_to_port(listener_d, 30000);

    if(listen(listener_d, 10) == -1)
    {
        error("can't listen");
    }
    struct sockaddr_storage client_addr;
    unsigned int address_size = sizeof(client_addr);
    puts("waiting for connection");
    char buf[255];
    while(1)
    {
        int connect_d = accept(listener_d, (struct sockaddr *)&client_addr, &address_size);
        if(-1 == connect_d)
        {
            error("can't open second socket");
        }
        if(say(connect_d, "jnternet  knock-knock protocol server\r\nvesion1.0\r\nknock! knock!\r\n>")!= -1)
        {
            read_in(connect_d, buf, sizeof(buf));
            if(strncasecmp("who's there?", buf, 12))
            {
                say(connect_d, "you should say 'who's there'?");
            }
            else
            {
                if(say(connect_d, "oscar\r\n>") != -1)
                {
                    read_in(connect_d, buf, sizeof(buf));
                    if(strncasecmp("oscar who?", buf, 10))
                    {
                        say(connect_d, "you shoud say 'oscar who?'!\r\n");
                    }
                    else
                    {
                        say(connect_d, "oscar silly question, you get a silly answer\r\n");
                    }
                }
            }
        }
        close(connect_d);
    }
    return 0;
}
