/*************************************************************************
	> File Name: 8.3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 08:55:30 PM EST
 ************************************************************************/

#include<stdio.h>

void w_scanf(int *a)
{
    int i = 0;
    printf("please input 10 num:");
    for(i = 0; i < 10; ++i)
    {
        scanf("%d",a+i);
    }
}

void w_sort(int *a)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;
    int temp_max = 0;
    int tmp = 0;
    
    temp = temp_max = a[0];
    for(i = 0; i < 10; ++i)
    {
        if(temp > a[i])
        {
            temp = a[i];
            j = i;
        }
        if(temp_max < a[i])
        {
            temp_max = a[i];
            k = i;
        }
    }
    tmp = a[j];
    a[j] = a[0];
    a[0] = tmp;
    tmp = a[k];
    a[k] = a[9];
    a[9] = tmp;
}

void w_printf(int *a)
{
    int i = 0;
    for(i = 0; i < 10; ++i)
    {
        printf("%d\t",a[i]);
    }
}


int main()
{
    int a[10] = {0};
    w_scanf(a);
    w_sort(a);
    w_printf(a);
    return 0;
}
