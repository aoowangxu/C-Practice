/*************************************************************************
	> File Name: reversed.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 11:43:24 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void reversed(char str[])
{
    int i = 0;
    int end = strlen(str);
    char ch;

    for (i = 0; i <= end / 2; ++i)
    {
        ch = str[end - i - 1];
        str[end - i - 1] = str[i];
        str[i] = ch;
    }
}
