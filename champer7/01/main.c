/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 05:54:56 PM PST
 ************************************************************************/

#include<stdio.h>
#include"find.h"
int main()
{
    int a = 0;
    int b = 0;
    printf("please intput a, b:");
    scanf("%d%d",&a,&b);
    printf("Max_com_div is %d\n",Max_com_div(a,b));
    printf("Min_com_mul is %d\n",Min_com_mul(a,b));
    return 0;
}
