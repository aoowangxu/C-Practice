/*************************************************************************
	> File Name: 8.7.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 10:37:16 PM EST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

char * sncat(char *str1, const char * str2, int n)
{
    char *address = str1;
    assert(NULL != str1 && NULL != str2);
    while(0 != n-- && '\0' != *(str2))
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
    return address;

}

int main()
{
    char ch1[21] = "1234";
    char *ch2 = "890";
    int n = 2;
    
    printf("%s", sncat(ch1, ch2, n));
    return 0;
}
