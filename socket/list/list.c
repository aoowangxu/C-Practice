/*************************************************************************
	> File Name: list.c
	> Author: 
	> Mail: 
	> Created Time: Tue 29 Mar 2016 09:08:02 AM EDT
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"

/*Node * reverse(Head head)
{
    if(NULL == head)
    {
        return NULL;
    }
    Node *nhead = NULL;
}*/

Node* sort(Head head1, Head head2)
{
    Head tmp = NULL;
    Head head = NULL;
    while(NULL != head1 && NULL != head2)
    {
        if(head1->num < head2->num)
        {
            if(NULL == head)
            {
                head = head1;
                tmp = head;
            }
            else
            {
                tmp->next = head1;
                tmp = head1;
            }
            head1 = head->next;
        }
        else
        {
            if(NULL == head)
            {
                head = head2;
                tmp = head;
            }
            else
            {
                tmp->next = head2;
                tmp = head2;
            }
            head2 = head->next;
        }
    }
    if(NULL == head1)
    {
        tmp->next = head2;
    }
    else
    {
        tmp->next = head1;
    }
    return head;
}


// 递归，感觉还是没有很好掌握while 到递归的转换
Node* dsort(Head head1, Head head2, Head head,Head tmp )
{
    if(NULL == head1 && NULL == head)
    {
        return head2;
    }
    if(NULL == head2 && NULL == head)
    {
        return head1;
    }

    if(NULL == head1 && NULL != head)
    {
        tmp->next = head2;
        return head;
    }
    if(NULL == head2 && NULL != head)
    {
        tmp->next = head1;
        return head;
    }

    if(head1->num < head2->num)
    {
        if(NULL == head)
        {
            head = head1;
            tmp = head;
        }
        else 
        {
            tmp->next = head1;
            tmp = head1;
        }
        head1 = head->next;
    }
    else
    {
        if(NULL == head)
        {
            head = head2;
            tmp = head;
        }
        else
        {
            tmp->next = head2;
            tmp = head2;
        }
        head2 = head->next;
    }
    dsort(head1, head2, head, tmp);
}
