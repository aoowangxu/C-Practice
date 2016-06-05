/*************************************************************************
	> File Name: 8.8.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 10:51:47 PM EST
 ************************************************************************/

#include<stdio.h>
int main()
{
    int num = 0;
    int LET = 0;
    int let = 0;
    int space = 0;
    int other = 0;
    char ch[100] = {'\0'};
    char *str = ch;
    printf("please input a string:");
//    scanf("%s",ch);
    gets(ch);
    while('\0' != *str)
    {
        ++str;
        if(*str >= '0' && *str <= '9')
        {
            ++num;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            ++let;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            ++LET;
        }
        else if(' ' == *str)
        {
            ++space;
        }
        else
        {
            ++other;
        }
    }
    printf("num = %d, let = %d, LET = %d, space = %d, other = %d",num, let, LET, space, other);
    return 0;

}
