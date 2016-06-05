/*************************************************************************
	> File Name: resort.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 02:58:28 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"resort.h"

int Merge(Head *head1, Head *head2)
{
    Head p = *head1;
    while(NULL != p->next)
    {
        p = p->next;
    }
    p->next = *head2;
    return 1;
}
int sort(Head *head)
{
    Head pre = *head;
    Head cur = *head;
    Head ne = *head;
    Head temp =(*head)->next;
    *head = (*head)->next;
    while(NULL != *head)
    {
        temp->next = NULL;
        cur = ne;
        while(NULL != cur && temp->data < cur->data)
        {
            pre = cur;
            cur = cur->next;
        }
        
        if(cur == ne)
        {
            temp->next = ne;
            ne = temp;
        }
        else
        {
            pre->next = temp;
            temp->next = cur;
        }
        temp = *head;
        *head = (*head)->next;
    }
    *head = ne;

    return 1;
}

void output(Head head)
{
    while(NULL != head)
    {
        printf("%d-->", head->data);
        head = head->next;
    }
    printf("\b\b\b    \n");
    return ;
}

int creat(Head *head)
{
    int n = 0;
    printf("please input data:");
    scanf("%d",&n);
    while(n > 0)
    {
        Head p = (Head)malloc(sizeof(Node));
        if(NULL == p)
        {
            printf("malloc failed\n");
            return 0;
        }
        p->data = n;
        p->next = NULL;
        if(NULL == *head)
        {
            *head = p;
        }
        else
        {
            p->next = *head;
            *head = p;
            
        }
        printf("please input data");
        scanf("%d", &n);
    }
    return 1;
}
