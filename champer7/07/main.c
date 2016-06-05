/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 10:36:14 PM PST
 ************************************************************************/

#include<stdio.h>
#include"copy.h"

int main()
{
    char str[100];
    char ch[100];
    char *c = NULL;

    printf("please input a string:");
    scanf("%s",str);

    printf("%s",copy(str, ch));
    putchar(10);
    return 0;
}
