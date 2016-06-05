/*************************************************************************
	> File Name: linklist.h
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Mar 2016 02:26:30 AM EST
 ************************************************************************/

#ifndef _LINKLIST_H
#define _LINKLIST_H

typedef struct f
{
    int num;
    struct f *next;
}Node, *Head;
int  creat(Head *head);
void output(Head head);
void dest(Head *head);
#endif

