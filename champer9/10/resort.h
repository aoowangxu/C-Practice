/*************************************************************************
	> File Name: resort.h
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 02:58:28 AM EST
 ************************************************************************/

#ifndef _RESORT_H
#define _RESORT_H
typedef struct node
{
    int data;
    struct node *next;
}Node, *Head;

int Merge(Head *head1, Head *head2);
int sort(Head *head);
int creat(Head *head);
void output(Head head);
#endif
