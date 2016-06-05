/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Fri 29 Jan 2016 06:24:55 AM PST
 ************************************************************************/

#include<stdio.h>
#define N 10
void sort(char str[])
{
    int i = 0;
    int j = 0;
    char ch = ' ';
    for (j = 1; j < N; ++j)
    {
        for (i = 0; (i < N - j) && (str[i] != '\0'); ++i)
        {
            if (str[i] > str[i + 1])
            {
                ch = str[i];
                str[i] = str[i +1];
                str[i + 1] = ch;
            }
        }
    }
}
