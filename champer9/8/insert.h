/*************************************************************************
	> File Name: insert.h
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:57:14 AM EST
 ************************************************************************/

#ifndef _INSERT_H
#define _INSERT_H
typedef struct node
{
    int data;
    struct node *next;
}Node, *Head;

int Insert(Head *head, int data);
int Create(Head *head);
void Output(Head head);
#endif
