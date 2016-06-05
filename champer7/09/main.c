/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 11:22:29 PM PST
 ************************************************************************/

#include<stdio.h>
#include"count.h"

int main()
{
    char str[100] = {'\0'};
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int *num = &a;
    int *let = &b;
    int *spa = &c;
    int *oth = &d;

    printf("please input a string:");
    gets(str);
    count(str, num, let, spa, oth);

    printf("num = %d, let = %d, space = %d, other = %d\n",a,b,c,d);
    return 0;

}
