/*************************************************************************
	> File Name: 2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 05:06:35 AM EDT
 ************************************************************************/

#include<stdio.h>

int contain(int *values, int size, int key)
{
    int head = 0;
    int tail = size - 1;
    int mid = 0;

    while(head <= tail) //=考点
    {
        mid = (head + tail) / 2;
        if(values[mid] == key)
        {
            printf("yes\n");
            return 1;
        }
        if(values[mid] > key)
        {
            head = mid + 1;
        }
    else
        {
            tail = mid - 1;
        }
    }
    return 0;
}

int main()
{
    int a[5] = {1, 3, 4, 6, 8};
    int key = 0;
    int size = 5;
    printf("input  key:\n");
    scanf("%d",&key);
    contain(a, size, key);
    return 0;
}
