/*************************************************************************
	> File Name: tong_pai.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Mar 2016 10:32:53 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a[11] = {0};
    int i = 0;
    int j = 0;
    int t = 0;

    printf("plesse input 5 num(0~10)\n");
    for(i = 0; i < 5; ++i)
    {
        scanf("%d",&t);
        ++a[t];
    }

    for(i = 0; i < 11; ++i)
    {
        for(j = 1; j <= a[i]; ++j)
        {
            printf("%d\t",i);

        }
    }

    return 0;
}
