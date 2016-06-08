/*************************************************************************
	> File Name: test_pthred_creat.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 10:51:03 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<errno.h>
#include<pthread.h>

void* dose_not(void *a)
{
    int i = 0;
    for(i = 0; i < 5; ++i)
    {
        sleep(1);
        puts("dose_not!________________1111111111111");
    }
    return NULL;
}

void* dose_too(void *a)
{
    int i = 0;
    for(i = 0; i < 5; ++i)
    {
        sleep(1);
        puts("dose_too***************** 222222222222");
    }
    return NULL;
}

void error(char *msg)
{
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(1);
}

int main()
{
    pthread_t t0;
    pthread_t t1;
    if(pthread_create(&t0, NULL, dose_not, NULL) == -1)
    {
        error("creat t0 failed");
    }
    if(pthread_create(&t1, NULL, dose_too, NULL) == -1)
    {
        error("Created t1 failed");
    }

    void* result;
    if(pthread_join(t0, &result) == -1)
    {
        error("无法回收线程t0");
    }
    if(pthread_join(t1, &result) == -1)
    {
        error("无法回收线程t1");
    }
    return 0;
}
