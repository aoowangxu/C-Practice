/*************************************************************************
	> File Name: delete.h
	> Author: 
	> Mail: 
	> Created Time: Sun 13 Mar 2016 08:09:45 AM EDT
 ************************************************************************/

#ifndef _DELETE_H
#define _DELETE_H
typedef struct student
{
    int num;
    char name[20];
    struct student *next;
}Node, *Head;

int creat(Head *head);
int deleted(Head *head1, Head head2);
void output(Head head);
int middleinsert(Head *head, Head *p);

#endif
