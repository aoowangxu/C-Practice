/*************************************************************************
	> File Name: judge.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 07:55:54 PM PST
 ************************************************************************/

#include<stdio.h>

int judge(int a)
{
    int i = 0;
    for (i = 2; i < a; ++i)
    {
        if(0 == a % i)
        {
            return 1;
        }
    }
    return 0;
}
