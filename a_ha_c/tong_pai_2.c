/*************************************************************************
	> File Name: tong_pai_2.c
	> Author: 
	> Mail: 
	> Created Time: Fri 04 Mar 2016 10:43:26 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int book[1001] = {0};
    int i = 0;
    int j = 0;
    int t = 0;
    int n = 0;
    printf("please input you want to sort numd\n ");
    scanf("%d",&n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d",&t);
        ++book[t];
    }

    for(i = 0; i < 1001; ++i)
    {
        for(j = 1; j <= book[i]; ++j)
        {
            printf("%d\t",i);
        }
    }
    getchar();
    getchar();
    return 0;
}
