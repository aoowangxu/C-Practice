/*************************************************************************
	> File Name: sizeof.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2016 07:33:47 PM EST
 ************************************************************************/

#include<stdio.h>
typedef struct node
{
    char j;
    short i;
}Node;

int main()
{
    printf("%d", sizeof(struct node));
    return 0;
}
