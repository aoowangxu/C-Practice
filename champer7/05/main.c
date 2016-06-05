/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 11:42:34 PM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = {'\0'};
    int i = 0;

    printf("please input str:");
    scanf("%s",str);

    reversed(str);
    printf("%s\n",str);
    return 0;
}
