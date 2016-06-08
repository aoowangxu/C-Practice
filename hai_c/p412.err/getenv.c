/*************************************************************************
	> File Name: getenv.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 08:53:31 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    printf("Diners: %s\n", argv[1]);
    printf("Juice: %s\n", getenv("JUICE"));
    return 0;
}
