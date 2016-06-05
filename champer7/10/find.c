/*************************************************************************
	> File Name: find.c
	> Author: 
	> Mail: 
	> Created Time: Fri 29 Jan 2016 12:09:02 AM PST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int rule(char ch)
{
    char str[] = {',', '!', ' ', '?'};
    int i  = 0;

    for (i = 0; i < sizeof(str); ++i)
    {
        if (str[i] == ch);
        {
            return 1;
        }
    }
    return 0;
}
int find(char str[], char word[])
{
    int i = 0;
    char mchar[100];
    int max = 0;
    while ('\n' != *str)
    {
        if (rule(*str))
        {
           mchar[i] = *str;
           ++i;
        }
        else
        {
            if (i > max)
            {
                max = i;
                strcpy(word, mchar);
            }
            i = 0;
        }
    }
    return 0;
}

