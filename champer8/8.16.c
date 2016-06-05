/*************************************************************************
	> File Name: 8.16.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 03:38:01 AM EST
 ************************************************************************/

#include<stdio.h>

int find(char *ch, int *a)

{
    int i = 0;
    int flag = 0;
    char str[20] = {'\0'};
    while('\0' != *ch)
    {
        if(*ch >= '0' && *ch <= '9')
        {
            ++flag;
            *str++ = *ch;
        }
        else
        {
            flag = 0;
        }


        ++ch;
    }
    
}
