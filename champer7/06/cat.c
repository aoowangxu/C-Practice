/*************************************************************************
	> File Name: cat.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 12:51:43 AM PST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

char * cat(char *strDes, char *strSrc)
{
    assert(NULL != strDes && NULL != strSrc);
    char *address = strDes;
    while ('\0' != *strDes ++);
    while ('\0' != *strSrc)
    {
        *strDes++ = *strSrc ++;
    }
    return address;

}
