/*************************************************************************
	> File Name: sort.c
	> Author: 
	> Mail: 
	> Created Time: Sat 20 Feb 2016 09:28:48 PM EST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void sort(char *c1, char *c2)
{
    char ch[100];
    if (strcmp(c1, c2) < 0)
    {
        strcpy(ch, c1);
        strcpy(c1, c2);
        strcpy(c2, ch);
    }

}
int main()
{
    char str1[100] = "bwe";
    char str2[100] = "are";
    char str3[100] = "cfirend";
    
    sort(str1, str2);
    sort(str1, str3);
    sort(str2, str3);
    printf("%s %s %s",str1, str2, str3);

    return 0;
}
