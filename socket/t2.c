/*************************************************************************
	> File Name: t2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 29 Mar 2016 11:47:45 AM EDT
 ************************************************************************/

#include<stdio.h>

Node* sort(Head head1, Head head2, Head head,Head tmp )
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
        if(NULL = head)
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
    sort(head1, head2, head, tmp);
}
