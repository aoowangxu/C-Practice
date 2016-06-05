/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 05:19:05 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
}Node, *Head;

int headinsrt(Head *head, Head *p)
{
    (*p)->next = *head;
    *head = *p;
    return 0;
}


int middleinsert(Head *head, Head *p)
{
    Head tmp = *head;
    Head pre = *head;
    if(NULL == *head)
    {
        *head = *p;
        return 0;
    }
    while(NULL != tmp && (*p)->num > tmp->num)
    {
        pre = tmp;
        tmp = tmp->next;
    }
    if(tmp == *head)
    {
        (*p)->next = *head;
        *head = *p;
    }
    else
    {
        (*p)->next = tmp;
        pre->next = *p;
    }
    return 0;
}
int Create(Head *head)
{
    while(1)
    {
        Head p = (Head)malloc(sizeof(Node));
        if(NULL == p)
        {
            printf("malloc failed\n");
            return 1;
        }
        printf("please input num:\n");
        scanf("%d", &p->num);
        p->next = NULL;
//        headinsrt(head, &p);
        middleinsert(head, &p);
        if((p->num) <= 0)
        {
            return 0;
        }
    }

}
int Output(Head head)
{
    while(NULL != head)
    {
        printf("%d-->", head->num);
        head = head->next;
    }
    printf("\b\b\b   \n");
}

Head Merge(Head *head1, Head *head2)
{
    Head head = NULL;
    Head tmp = NULL;
    if(NULL == *head1)
    {
        return *head2;
    }
    if(NULL == *head2)
    {
        return *head1;
    }

    while(NULL != *head1 && NULL != *head2)
    {
        if((*head1)->num < (*head2)->num)
        {
            if(NULL == head)
            {
                head = *head1;
                tmp = *head1;
            }
            else
            {
                tmp->next = *head1;
                tmp = *head1;
            }    
            *head1 = (*head1)->next;
        }
        else
        {
            if(NULL == head)
            {
                head = *head2;
                tmp = *head2;
            }
            else
            {
                tmp->next = *head2;
                tmp = *head2;
            }
            *head2 = (*head2)->next;
        }
    }
    if(NULL == *head1)
    {
        tmp->next = *head2;
    }
    else
    {
        tmp->next = *head1;
    }
    return head;
}

Head Rmerge(Head head1, Head head2)
{
    Head head = NULL;
    if(NULL == head1)
    {
        return head2;
    }
    if(NULL == head2)
    {
        return head1;
    }
    if(head1->num < head2->num)
    {
        head = head1;
        head->next = Rmerge(head1->next, head2);
    }
    else
    {
        head = head2;
        head->next = Rmerge(head1, head2->next);
    }
    return head;
}

//3判断是否有环
int Judge(Head head)
{
    if(NULL == head)
    {
        printf("NULL\n");
        return 0;
    }
    Head last = head;
    Head fast = head;
    while(NULL != fast && NULL != fast->next)
    {
        last = last->next;
        fast = fast->next->next;
        if(fast == last)
        {
            return 1;
        }
        
    }
    return 0;
}

//1逆序
Head Reverse(Head head)
{
    if(NULL == head)
    {
        return NULL;
    }
    Head tmp = NULL;
    Head nhead = NULL;
    while(NULL != head)
    {
        tmp = head->next;
        head->next = nhead;
        nhead = head;
        head = tmp;
    }
    return nhead;
}

Head RRverse(Head head, Head nhead)
{
    Head tmp = head->next;
    head->next = nhead;
    nhead = head;
    head = tmp;
    return NULL == head ? nhead : RRverse(head, nhead); 
}
int main()
{
    Head head1 = NULL;
    Head head2 = NULL;
    Head nhead = NULL;
    Create(&head1);
    Output(head1);
    Create(&head2);
    Output(head2);

//   Head head = Merge(&head1, &head2);
    Head head =  Rmerge(head1,head2);
    Output(head);
    printf("%d\n", Judge(head));
    head = RRverse(head, nhead);
    Output(head);

    head = Reverse(head);
    Output(head);
    return 0;

}
