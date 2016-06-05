/*************************************************************************
	> File Name: inster.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Mar 2016 02:26:29 AM EST
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"
int headinsert(Head *head)
{
    Head p = (Head) malloc(sizeof(Node));
    if(NULL == p)
    {
        printf("malloc fail");
        return 0;
    }

    printf("please input num:");
    scanf("%d", &(*p)->num);
    if((*p)->num > 0)_
    {
        return 1;
    }
    return 0;
}
 
int middleinsert(Head *head, int num)
{
    Node *current = *head;
    Node *previous = NULL;
    Node *node = (Node *)malloc(sizeof(Node));
    if(NULL == node)
    {
        printf("malloc fail");
        return 0;
    }
    node->num = data;
    node->next = NULL;
    if(NULL == *head)
    {
        *head = node;
    }
    else
    {
        while(NULL != current && current->num < node->data)
        {
            previous = current;
            current = current->next;
        }
        if(current == *head)
        {
            node->next = *head;
            *head = node;
        }
        else
        {
            previous->next = node;
            node->next = current;
        }
    }
    return 1;
}
