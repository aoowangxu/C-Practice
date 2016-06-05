/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Mar 2016 02:26:30 AM EST
 ************************************************************************/

#include<stdio.h>
#include"linklist.h"

int main()
{
    Head head = NULL;
    if(creat(&head))
    {
        output(head);
        destory(&head);
        
    }
    return 0;
    
}
