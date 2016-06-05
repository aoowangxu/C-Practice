/*************************************************************************
	> File Name: huijiao.c
	> Author: 
	> Mail: 
	> Created Time: Tue 01 Mar 2016 09:39:22 AM EST
 ************************************************************************/

#include<stdio.h>


int find(int *arr, int size, int (*cmp)(int a, int b));

int cmpm(int a, int b);

int main()
{
    int a[5] = {1, 3, 2, 5, 1};
    


    printf("%d\n",find(a, 5, cmpm));
    return 0;
}


int find(int *arr, int size, int (*cmp)(int a, int b))
{
    int max = *arr;
    int i = 0;
    for(i  = 0; i < size; ++i)
    {
        if((*cmp)(max, arr[i]))
        {
            max = arr[i];
        }
    }
    return max;

}

int cmpm(int a, int b)
{
    if(a-b)
    {
        return 1;
    }
    return 0;
}
