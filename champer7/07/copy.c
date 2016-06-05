/*************************************************************************
	> File Name: copy.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 10:21:33 PM PST
 ************************************************************************/

#include<stdio.h>

char *copy(char str[], char str1[])
{
    char *address = str1;
    while (*str != '\0')
    {
        if ('a' == *str || 'e' == *str || 'i' == *str || 'o' == *str || 'u' == *str)
        {
            *str1 ++ = *str;
        }
        ++ str;
    }
    *str1 = '\0';
    return address;
}
