/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Fri 29 Jan 2016 06:24:55 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 10
char str[N];
int main()
{
    int i = 0;
    int flag = 0;
    for (flag = 1; flag == 1;)
    {
        printf("input string:\n");
        scanf("%s", str);
        if (strlen(str) > N)
        {
            printf("string too long,input again");
        }
        else
        {
            flag = 0;    
        }
    }
    sort(str);
    printf("sorted:");
    printf("%s",str);
    return 0;

}
