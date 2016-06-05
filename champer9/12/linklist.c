/*************************************************************************
	> File Name: linklist.c
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Mar 2016 07:31:24 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
int creat(Head *head)
{
    Head p = (Head)malloc(sizeof(Node));
    if(NULL == p)
    {
        printf("memery fail.\n");
        return 0;
    }
    *head = p;
    printf("please input a student:");
    scanf("%d %s %d %d", &p->num, p->name, &p->sex, &p->age);
    p->next = NULL;
    while((p->num) > 0)
    {
        p = (Head)malloc(sizeof(Node));
        if(NULL == p)
        {
            printf("malloc failed\n");
            return 0;
        }
        p->next = *head;
        *head = p;
        printf("please input a student:");
        scanf("%d %s %d %d", &p->num, p->name, &p->sex, &p->age);
    }
    p = *head;
    *head = (*head)->next;
    free(p);
    return 1;
}

void output(Head head)
{
    if(NULL == head)
    {
        printf("list is null.\n");
    }
    while(NULL != head)
    {
        printf("%d %s %d %d\n",head->num, head->name, head->sex, head->age);
        head = head->next;
    }
}

void deleted(Head *head, int age)
{
    Head pre = NULL;
    Head cur = *head;
    while(NULL != cur && cur->age != age)
    {
        pre = cur;
        cur = cur->next;
    }
    if(NULL == cur)
    {
        return ;
    }
    pre->next = cur->next;
    free(cur);
}
