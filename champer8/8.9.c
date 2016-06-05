/*************************************************************************
	> File Name: 8.9.c
	> Author: 
	> Mail: 
	> Created Time: Tue 23 Feb 2016 01:31:49 AM EST
 ************************************************************************/

#include<stdio.h>

void shift(int (*a)[3], int n, int m)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < i; ++j)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int i = 0;
    int j = 0;
   
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            printf("%d\t",a[i][j]);
        }
        putchar(10);
    }
    shift(a, 3, 3);
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            printf("%d\t",a[i][j]);
        }
        putchar(10);
    }
    return 0;
}
