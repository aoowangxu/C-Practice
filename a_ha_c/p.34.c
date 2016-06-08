/*************************************************************************
	> File Name: p.34.c
	> Author: 
	> Mail: 
	> Created Time: Fri 25 Mar 2016 11:48:14 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[100],s[100];
    int i, len, mid, next, top;

    printf("please input string:\n");
    gets(a);
    len = strlen(a);
    mid = len/2-1;
    top = 0;
    for (i = 0; i <= mid; ++i)
    {
        s[++top] = a[i];
    }

    if (len % 2 == 0)
    {
        next = mid + 1;
    }
    else
    {
        next = mid +2;
    }

    for(i = next; i <= len; ++i)
    {
        if (a[i] != s[top])
        {
            break;
        }
        top--;
    }

    if(0 == top)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    getchar();
    getchar();
    return 0;
}
