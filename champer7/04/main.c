/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 08:07:53 PM PST
 ************************************************************************/

#include<stdio.h>
#include"transpose.h"
int main()
{
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    transpose(array, 3, 3);
    return 0;
}
