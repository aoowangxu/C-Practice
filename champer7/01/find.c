/*************************************************************************
	> File Name: finf.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 05:47:35 PM PST
 ************************************************************************/

#include<stdio.h>
#include"find.h"

int Max_com_div(int a, int b)
{
    int i = 0;
    int min = 0;
    min = a > b ? b : a;
    for (i = min; i > 0; --i)
    {
        if (0 == a % i && 0 == b % i)
        {
            return i;
        }
    }
}

int Min_com_mul(int a, int b)
{
    int i = 0;
    int temp = 0;
    temp = a > b ? a : b;
    for (i = temp; ; ++i)
    {
        if (0 == i % a && 0 == i % b)
        {
            return i;
        }
    }
}
