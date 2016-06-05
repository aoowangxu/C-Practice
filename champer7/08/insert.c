/*************************************************************************
	> File Name: insert.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 11:05:04 PM PST
 ************************************************************************/

#include<stdio.h>

void insert(int n)
{
    int i = 0;
    for (i = 1000; i > 0; i /= 10)
    {
        printf("%d ", n / i);
        n %= i;
    }
    putchar(10);
}

