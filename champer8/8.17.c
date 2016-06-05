/*************************************************************************
	> File Name: 8.17.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 03:49:13 AM EST
 ************************************************************************/

#include<stdio.h>
#include<assert.h>

int w_strcmp(const char *p1, const char *p2)
{
    assert((NULL != p1) && (NULL) != p2);
    while(*p1 && *p2 &&  *p1 == *p2)
    {
        ++p1;
        ++p1;
    }
    return *p1 - *p2;
}

int main()
{
    char ch1[20] = "12344";
    char ch2[20] = "12333";
    printf("%d", w_strcmp(ch1, ch2));
    return 0;
}
