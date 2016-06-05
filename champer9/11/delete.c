/*************************************************************************
	> File Name: delete.c
	> Author: 
	> Mail: 
	> Created Time: Sun 13 Mar 2016 08:09:45 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"delete.h"

int creat(Head *head)
{
    while(1)
    {
        Head p = (Head)malloc(sizeof(Node));
        if(NULL == p)
        {
            printf("malloc failed.");
            return 0;
        }
        p->next = NULL;
        printf("please input num name:");
        scanf("%d %s", &p->num, p->name);
        if((p->num) <= 0)
        {
            break;
        }
        if(NULL == *head)
        {
            *head = p;
        }
        else
        {
            middleinsert(head, &p);
        }
    }
    return 1;//if function return int first write return 1;
}

int middleinsert(Head *head, Head *p)
{
    Head pre = *head;
    Head cur = *head;
    while(NULL != cur && cur->num < (*p)->num)
    {
        pre = cur;
        cur = cur->next;
    }
    if(cur == *head)
    {
        cur->next = *head;
        *head = cur;
    }
    if(NULL == cur)
    {
        pre->next = *p;
    }
    else
    {
        pre->next = *p;
        (*p)->next = cur;
    }
}

void output(Head head)
{
    while(NULL != head)
    {
        printf("%d %s\n", head->num, head-> name);
        head = head->next;
    }
    return;
}

int deleted(Head *head1, Head head2)
{
    Head p = *head1;
    Head pre = NULL;
    Head p2 = NULL;
    while(NULL != p)
    {
        p2 = head2;
        while(NULL != p2->next && (p->num != p2->num))
        {
            p2 = p2->next;
        }
        if(p->num == p2->num)
        {
            if(*head1 == p)
            {
                *head1 = p->next;
            }
            else
            {
                pre->next = p->next;
            }
            free(p);
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
    return 1;
}
