/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 06:50:22 PM PST
 ************************************************************************/

#include<stdio.h>
#include"way.h"
#include<math.h>
double main()
{
    double a = 0;
    double b = 0;
    double c = 0;
    double temp = 0;

    printf("please input a, b, c");
    scanf("%lf%lf%lf",&a,&b,&c);
    temp = b * b - 4 * a * c;
    if (temp > 0)
    {
        way1(a, b, c);
    }
    else if (0 - temp < 1e-6)
    {
        way0(a, b, c);
    }
    else
    {
        way2(a, b, c);
    }
    return 0;
}
