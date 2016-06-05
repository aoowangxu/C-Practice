/*************************************************************************
	> File Name: 8.11.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 01:27:49 AM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void sort(char (*a)[5], int n)
{
    int i = 0;
    int j = 0;
    char temp[5] = {'\0'};

    for(i = 0; i < n-1; ++i)
    {
        for(j = i; j < n-i; ++j)
        {
            if(strcmp(a[j], a[j+1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }
}
int main()
{
    int i = 0;
    char  ch[10][5];
    int n = 10;


    printf("please input 10 string of 4 char:\n");
    for(i = 0; i < 10; ++i)
    {
        scanf("%s",ch[i]);
        fflush(stdin);
    }

    sort(ch, n);
    printf("***********sorted************\n");
    for(i = 0; i < 10; ++i)
    {
        printf("%s\n",ch[i]);
    }

    return 0;
}
