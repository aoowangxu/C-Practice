/*************************************************************************
	> File Name: quicksort.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Mar 2016 11:02:54 AM EST
 ************************************************************************/

#include<stdio.h>
int a[101] = {0};
int n = 0;

void quicksort(int left, int right)
{
    int i = 0;
    int j = 0;
    int t = 0;
    int temp = 0;
    if(left > right)
    {
        return;
    }

    temp = a[left];
    i = left;
    j = right;
    while(i != j)
    {
        while(a[j] >= temp && i < j)
        {
            --j;
        }
        while(a[i] <= temp  && i < j)
        {
            ++i;
        }
        if(i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;

    quicksort(i + 1, right);
    quicksort(left, i-1);
    return;
}
int main()
{
    int i = 0;
    int j = 0;
    printf("输入个数：\n");
    scanf("%d",&n);
    for(i = 1; i <= n; ++i)
    {
        scanf("%d",a+i);
    }

    quicksort(1, n);
    for(i = 0; i < n; ++i)
    {
        printf("%d\t",a[i+1]);
    }
    return 0;
}
