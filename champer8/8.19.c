/*************************************************************************
	> File Name: 8.19.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 05:39:05 AM EST
 ************************************************************************/

#include<stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char *newp = newbuf;

char *new(int n)
{
    if(newp+n <= newbuf+NEWSIZE)
    {
        newp += n;
        return (newp-n);
    }
    else
    {
        return NULL;
    }
}

void free(char *p)
{
    if(p >= newbuf && p < newbuf+NEWSIZE)
    {
        newp = p;
    }
}
