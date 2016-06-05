/*************************************************************************
	> File Name: 8.20.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 04:08:40 AM EST
 ************************************************************************/

#include<stdio.h>
void sort(char a[][10], int n)
{
    char tmp[10] = {'\0'};
    int i = 0;
    int j = 0;

    for(i = 0; i < n-1; ++i)
    {
        for(j = 0; j < n-1-i; ++j)
        {
            if(strcmp(a+j, a+j+1) > 0)
            {
                strcpy(tmp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], tmp);
            }
        }
    }

}

int main()
{
    char ch[5][10] = {"123","124", "234", "1234", "987"};
    int i = 0;
    sort(ch,5);
    for(i = 0; i < 5; ++i)
    {
        printf("%s\n",ch[i]);
    }

    return 0;
}
