/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 08:59:19 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc, char *argv[])
{
    char *my_evn[] = {"FOOD = coffee", NULL};
    if(execle("./coffee.c", "./coffee.c", "donuts", NULL, my_evn) == -1)
    {
        fprintf(stderr, "can't Created order: %s\n", stderror(errno));
        return 1;
    }

    return 0;

}

