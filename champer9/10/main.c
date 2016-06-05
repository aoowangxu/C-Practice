/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 02:58:27 AM EST
 ************************************************************************/

#include<stdio.h>
#include"resort.h"
int main()
{
    Head head1 = NULL;
    Head head2 = NULL;
    printf("please input list 1\n");
    if(creat(&head1))
    {
        output(head1);
    }
    printf("please input list 2\n");
    if(creat(&head2))
    {
        output(head2);
    }
    printf("internet*************\n");
    if(Merge(&head1, &head2))
    {
        output(head1);
    }
    if(sort(&head1))
    {
        printf("please input list 1\n");
        output(head1);
    }
    return 0;
}
