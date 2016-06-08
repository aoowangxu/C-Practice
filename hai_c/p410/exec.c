/*************************************************************************
	> File Name: exec.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 08:33:27 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

int main()
{
    if(execl("/sbin/ifconfig", "/sbin/ifconfig", NULL) == -1)
    {
        fprintf(stderr, "can't run ipconfig: %s", strerror(errno));
        return 1;
    }
    return 0;
}
