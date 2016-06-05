/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:57:14 AM EST
 ************************************************************************/

#include<stdio.h>
#include"insert.h"

int main()
{
    Head head = NULL;
    if(Create(&head))
    {
        Output(head);
    }
    return 1;
}
