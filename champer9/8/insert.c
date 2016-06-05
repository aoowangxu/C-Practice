/*************************************************************************
	> File Name: insert.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:57:14 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"insert.h"

int Create(Head *head)
{
    int n = 0;
    printf("please input a number:");
    scanf("%d",&n);

    while(n > 0)
    {
        Insert(head, n);
        printf("please input a number:");
        scanf("%d", &n);
    }
    return 1;
}

int Insert(Head *head, int data)
{
    Head p = (Head)malloc(sizeof(Node));
    if(NULL == p)
    {
        printf("malloc failed\n");
        return 0;
    }
    p->data = data;
    p->next = NULL;
    if(NULL == *head)
    {
        *head = p;
        return 1;
    }
    p->next = *head;
    *head = p;
    return 1;
}
void Output(Head head)
{
    while(NULL != head)
    {
        printf("%d-->",head->data);
        head = head->next;
    }
    printf("\b\b\b   \n");
}
