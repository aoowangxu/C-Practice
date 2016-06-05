/*************************************************************************
	> File Name: list.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:12:20 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"list.h"

int Create(Head *head, int n)
{
    int i = 0;
    Head tail = NULL;
    for(i = n; i > 0; --i)
    {
        Head p = (Head)malloc(sizeof(Node));
        if(NULL == p)
        {
            printf("malloc failed.\n");
            return 0;
        }
        if(i == n)
        {
            tail = p;
        }
        p->data = i;
        p->next = NULL;
        p->next = *head;
        *head = p;
    }
    tail->next = *head;
    return 1;
}

int Delete(Head *head)
{
    int i = 1;
    Head pre = NULL;
    while(*head != (*head)->next)
    {
        *head = (*head)->next;
        pre = *head;
        *head = (*head)->next;
        pre->next = (*head)->next;
        free(*head);
        *head = pre->next;
    }
    return 1;
}
