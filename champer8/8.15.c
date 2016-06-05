/*************************************************************************
	> File Name: 8.15.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 02:39:35 AM EST
 ************************************************************************/

#include<stdio.h>

float ave1(int (*a)[5], int n)
{
    int i = 0;
    int sum = 0;
    for(i = 0; i < n; ++i)
    {
        sum += a[i][0];
    }

    return sum/4.0;
}

void find(int(*a)[5], int n)
{
    int i = 0;
    int j = 0;
    int flag = 0;

    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < 5; ++j)
        {
            if(a[i][j] < 60)
            {
                ++flag;
            }
        }
        if(flag > 1)
        {
            printf("student %d have more 2 class not jige.\n", i+1);
        }
        flag = 0;
    }
}

void find_good(int (*a)[5], int n)
{
    int i = 0;
    int j = 0;
    int flag = 0;
    int sum = 0;
    printf("question 3\n");
    for(i = 0; i < n; ++i)
    {
        sum = 0;
        flag = 0;
        for(j = 0; j < 5; ++j)
        {
            sum += a[i][j];
            if(a[i][j] > 85)
            {
                ++flag;
            }
        }
        if(sum/4.0 - 90 > 0.001)
        {
            flag = 5;
        }
        if(5 == flag)
        {
            printf("student %d is your find\n",i+1);
        }
    }

}

int main()
{
    int a[4][5];
    int i = 0;
    int j = 0;
    float  ave = 0;


    for(i = 0; i < 4; ++i)
    {
        for(j = 0; j < 5; ++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n*********************question ******************\n");
    ave = ave1(a,4);
    printf("%lf",ave);

    printf("\n*********************question ******************\n");
    find(a,4);

    printf("\n*********************question ******************\n");

    find_good(a,4);

    return 0;
}
