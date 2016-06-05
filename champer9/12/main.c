/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Mar 2016 07:20:05 AM EST
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"

int main()
{
    int n = 0;
    Head head = NULL;
    creat(&head);
    output(head);
    printf("please input delete age\n");
    scanf("%d",&n);
    deleted(&head, n);
    output(head);
    return 0;
}
