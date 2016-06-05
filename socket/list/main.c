/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Mar 2016 02:26:30 AM EST
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"

#include"list.h"
int main()
{
    
    Head head = NULL;
    Head tmp = NULL;
    /*
    if(creat(&head))
    {
        output(head);
        destory(&head);
        
    }*/

    Head head1 = NULL;
    Head head2 = NULL;
    creat(&head1);
    output(head1);
    creat(&head2);
    output(head2);
    output(sort(head1, head2));

   return 0;
    
}
