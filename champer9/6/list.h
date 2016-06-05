/*************************************************************************
	> File Name: list.h
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:12:20 AM EST
 ************************************************************************/

#ifndef _LIST_H
#define _LIST_H
typedef struct node
{
    int data;
    struct node *next;
}Node, *Head;

int Create(Head *head, int n);
int Delete(Head *head);
#endif
