/*************************************************************************
	> File Name: count.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 11:22:29 PM PST
 ************************************************************************/

#include<stdio.h>

int count(char str[], int *number, int *letter, int *space, int *other)
{
    while ('\0' != *str)
    {
        if (*str >= '0' && *str <= '9')
        {
            (*number) ++;
        }
        else if (' ' == *str)
        {
            (*space) ++;
        }
        else if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
        {
            (*letter) ++;
        }
        else
        {
            (*other) ++;
        }
        ++str;
    }
    return 0;
}
