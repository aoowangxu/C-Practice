/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Thu 28 Jan 2016 12:51:43 AM PST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
int main()
{
    char *str1 = "we";
    char *str2 = "me";
    str1 = cat(str1,str2);
    printf("%s\n",str1);
    return 0;
}
