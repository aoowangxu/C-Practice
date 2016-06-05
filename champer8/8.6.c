/*************************************************************************
	> File Name: 8.6.c
	> Author: 
	> Mail: 
	> Created Time: Mon 22 Feb 2016 10:26:35 PM EST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

int slength(const char *str)
{
    int len = 0;
    assert(NULL != str);
    while(*str++ != '\0')
    {
        ++len;
    }
    return len;
}
int main()
{
    char *ch ="123";
    printf("len = %d",slength(ch));
    return 0;


}
