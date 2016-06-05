/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 11:05:04 PM PST
 ************************************************************************/

#include<stdio.h>
#include"insert.h"

int main()
{
    int n = 0;
    printf("please input a number:");
    scanf("%d",&n);

    insert(n);
    return 0;
}
