/*************************************************************************
	> File Name: transpose.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 08:07:54 PM PST
 ************************************************************************/

#include<stdio.h>
#include"transpose.h"
int transpose(int array[][3], int row, int line)
{
    int i = 0;
    int j = 0;
    int array0[3][3] = {0};
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < line; ++j)
        {
            array0[j][i] = array[i][j];
        }
    }

    for(i = 0; i < line; ++i)
    {
        for (j = 0; j < row; ++j)
        {
            printf("%d\t",array0[i][j]);
        }
        putchar(10);
    }

    return 0;
}
