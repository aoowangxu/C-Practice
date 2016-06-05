/*************************************************************************
	> File Name: 8.18.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 03:59:01 AM EST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n = 0;
    char *a[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    printf("please input mounth:\n");
    scanf("%d",&n);
    
    printf("%s\n", *(a+n-1));
    return 0;
}
