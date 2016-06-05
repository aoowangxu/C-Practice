/*************************************************************************
	> File Name: linklist.h
	> Author: 
	> Mail: 
	> Created Time: Wed 09 Mar 2016 07:22:14 AM EST
 ************************************************************************/

#ifndef _LINKLIST_H
#define _LINKLIST_H
typedef struct student
{
    int num;
    char name[20];
    int sex;
    int age;
    struct student *next;
}Node, *Head;

int creat(Head *head);
void deleted(Head *head, int age);
void output(Head head);
//wangxu is a foolish pig.He was beated by people.wahaha!No,wangxu was a fantasitic pig.
#endif
