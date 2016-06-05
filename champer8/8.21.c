/*************************************************************************
	> File Name: 8.21.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 03:57:31 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    int a[100] = {0};
    int* b[100] = {NULL};
    void sort(int* b[], int n);
    printf("please input n :\n");
    scanf("%d",&n);
    printf("please input n num\n");
    
    for(i = 0; i < n; ++i)
    {
        scanf("%d",a+i);
        b[i] = a+i;
    }

    sort(b,n);
    for(i = 0; i < n; ++i)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}

void sort(int* b[], int n)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < n-1; ++i)
    {
        for(j = 0; j < n-i-1; ++j)
        {
            if(*(b[j]) > *(b[j+1]))
            {
                temp = *(b[j]);
                *(b[j]) = *(b[j+1]);
                *(b[j+1]) = temp;
            }
        }
    }
}
