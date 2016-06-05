/*************************************************************************
	> File Name: linklist.c
	> Author:{{   }} 
	> Mail: 
	> Created Time: Sat 05 Mar 2016 02:26:30 AM EST
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"
#include<stdlib.h>
#include"insert.h"

int create(Head *head)
{
    int data = 0;
    Node *p = NULL;
    printf("please input a num:");
    scanf("%d",&data);
    while(p->num > 0)
    {
       headinsret(&head);
    }
}

void output(Head head)
{
    while(NULL != head)
    {
        printf("%d->>",head->data);
        head = head->next;
    }
    printf("\b\b\b   \n");
}

void destory(Head *head)
{
    Node *p = head;
    while(NULL != p)
    {
        *head = (*head)->next;
        free(head);
        p = *head;
    }
    *head = NULL;
}

int createtail(Head *head)
{
    int data = 0;
    Node *p = NULL;
    printf("please input num:");
    scanf("%d", &data);
    while(0 < data)
    {
        Node *node = (Node *)malloc(sizeof(Node));
        if(NULL == node)
        {
            printf("malloc fail\n");
            return 0;
        }
        node->data = data;
        node->next = NULL;
        if(NULL == *head)
        {
            *head = node;
        }
        else
        {
            p->next = node;
        }
        p = node;
        printf("please input num:");
        scanf("%d", &data);
    }
    return 1;
}

void deleted(Head *head, int data)
{
    Node *current = *head;
    Node *previous = NULL;
    if(NULL == *head)
    {
        printf("list is null");
        return ;
    }
    while(NULL != current && current->data != data)
    {
        previous = current;;
        current = current->next;
    }
    if(NULL == current)
    {
        return;
    }
    if(current == *head)
    {
        *head = (*head)->next;
    }
    else
    {
        previous->next = current->next;
    }
    free(current);
}
