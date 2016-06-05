/*************************************************************************
	> File Name: 8.13.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 02:20:21 AM EST
 ************************************************************************/

#include<stdio.h>

void sort(int *a, int n)
{
    int tmp = 0;
    int i = 0;
    for(i = 0; i < n/2; ++i)
    {
        tmp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = tmp;
    }
}

int main()
{
    int n = 0;
    int a[10] = {0};
    int i = 0;

    for(i = 0; i < 10; ++i)
    {
        scanf("%d",a+i);
    }

    sort(a,10);

    for(i = 0; i < 10; ++i)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;

    
}
