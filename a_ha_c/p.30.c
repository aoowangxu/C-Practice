/*************************************************************************
	> File Name: p.30.c
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Mar 2016 11:39:16 AM EDT
 ************************************************************************/

#include<stdio.h>

struct queue
{
    int data[100];
    int head;
    int tail;
};

int main()
{
    struct queue q;
    int i;
    q.head = 1;
    q.tail = 1;
    printf("please input 9 number:");
    for (i = 1; i < 10; ++i)
    {
        scanf("%d", &q.data[q.tail++]);
    }
    
    while ( q.head < q.tail )
    {
        printf("%d", q.data[q.head]);
        q.head++;

        q.data[q.tail] = q.data[q.head];
        q.tail++;
        q.head++;
    }

    return 0;

}
