/*************************************************************************
	> File Name: coffee.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 08:44:11 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    char *w = getenv("EXTRA");
    if(!w)
    {
        w = getenv("FOOD");
    }
    if(!w)
    {
       w = argv[argc - 1];
    }
    char *c = getenv("EXTRA");
    if(!c)
    {
        c = argv[argc - 1];
    }
    printf("%s with %s", c, w);
    return 0;
}
