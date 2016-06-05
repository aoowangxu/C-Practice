/*************************************************************************
	> File Name: 8.4.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 09:15:13 PM EST
 ************************************************************************/

#include<stdio.h>
#define N 10

void sort(int *a, int n, int m)
{
    int i = 0;
    int temp = 0;
    int *p = (int *)malloc(m * sizeof(int));

    for(i = 0; i < m; ++i)
    {
        *(p+i) = a[n-m+i];
    }
    for(i = 0; i < n-m; ++i)
    {
        a[n-i-1] = a[n-m-i-1];
    }
    for(i = 0; i < m; ++i)
    {
        a[i] = *(p+i);
    }
    free(p);
    p = NULL;
}

int main()
{
    int a[N] = {0};
    int i = 0;
    int m = 0;
    printf("input m:");
    scanf("%d",&m);
    printf("please input 10 num:");
    for(i = 0; i < N; ++i)
    {
        scanf("%d",a+i);
    }
    sort(a,N,m);
    for(i = 0; i < N; ++i)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
