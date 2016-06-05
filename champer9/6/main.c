/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 01:12:20 AM EST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"list.h"
int main()
{
    int n = 0;
    Head head = NULL;
    printf("pleae input n:");
    scanf("%d",&n);
    if(Create(&head, n))
    {
        Delete(&head);
        printf("last man is number %d\n",head->data);
        free(head);
        head = NULL;
    }
    return 0;
}
