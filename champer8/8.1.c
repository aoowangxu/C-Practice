/*************************************************************************
	> File Name: 8.1.c
	> Author: 
	> Mail: 
	> Created Time: Thu 25 Feb 2016 08:46:32 AM EST
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>


void sort(int *a,int *b)
{
        int temp = 0;
        if (*a < *b)
    {
                temp = *a;
                *a = *b;
                *b = temp;
            
    }

}
int main()
{
        int a = 3;
        int b = 5;
        int c = 1;
        int i = 0;


        sort (&a, &b);
        sort (&b, &c);
        sort (&a, &c);
        printf("%d %d %d\t",a, b, c);

        return 0;

}

