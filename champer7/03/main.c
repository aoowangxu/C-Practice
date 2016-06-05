/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 07:48:24 PM PST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a = 0;
    int temp = 0;

    printf("please input a :");
    scanf("%d",&a);

    temp = judge(a);
    if(temp)
    {
        printf("%d is su shu\n",a);
    }
    else
    {
        printf("%d is not a su shu\n",a);
    }

    return 0;

}
