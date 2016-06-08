/*************************************************************************
	> File Name: p400.guard_log.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Apr 2016 08:00:44 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char* now()
{
    time_t t;
    time(&t);
    return asctime(localtime(&t));
}

int main()
{
    char comment[80];
    char cmd[120];

    fgets(comment, 80, stdin);
    sprintf(cmd, "echo '%s %s' >> reports.log", comment, now()); // ???

    system(cmd);
    return 0;
}

