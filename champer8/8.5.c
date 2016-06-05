/*************************************************************************
	> File Name: 8.5.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 09:56:19 PM EST
 ************************************************************************/

#include<stdio.h>
#define N 10
int result(int *a, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int b = 0;
    int x = 0;
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            if (0 != a[j])
            {
                ++k;
            }
            
            if(3 == k)
            {
                a[j] = 0;
                k = 0;
                ++b;
                if (-1 == b)
                {
                    return 0;
                }
            }
            printf("%d\t", ++x);
        }
    }
    return 0;

}

int main()
{
    int a[N] = {0};
    int i = 0;

    for(i = 0; i < N; ++i)
    {
        a[i] = i + 1;
        printf("%d\t",a[i]);
    }

    result(a, N);
    for (i = 0; i < N; ++i)

    {
            if (0 != a[i])
            {
                printf("%d",a[i]);
            }
    }
    return 0;
}
