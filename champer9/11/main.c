/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sun 13 Mar 2016 08:09:45 AM EDT
 ************************************************************************/

#include<stdio.h>
#include"delete.h"

int main()
{
    Head head1 = NULL;
    Head head2 = NULL;
    printf("list1 ************************\n");
    if(creat(&head1))
    {
        output(head1);
    }
    printf("list2 ************************\n");
    if(creat(&head2))
    {
        output(head2);
    }
    if(deleted(&head1, head2))
    {
        printf("deleted *******************\n");
        output(head1);
    }

    return 0;
}
