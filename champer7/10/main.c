/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Fri 29 Jan 2016 05:45:35 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] = {'\0'};
    char word[50] = {'\0'};

    printf("please input a string:");
    scanf("%s",str);

    find(str,word);
    printf("%s",word);
    return 0;
}
