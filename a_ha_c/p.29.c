/*************************************************************************
	> File Name: p.29.c
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Mar 2016 11:30:59 AM EDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[102] = {0, 6, 3, 1, 7, 5, 8 ,9, 2, 4};
    int head = 1;
    int tail = 10;
    while (head < tail)
    {
        printf("%d", a[head]);
        ++head;
        a[tail] = a[head];
        ++tail;
        ++head;
    }

    getchar();
    getchar();
    return 0;

}
