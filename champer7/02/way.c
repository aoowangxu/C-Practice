/*************************************************************************
	> File Name: way.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Jan 2016 06:50:22 PM PST
 ************************************************************************/
#include<stdio.h>
#include<math.h>
#include"way.h"

int way1(double a, double b, double c)
{
    double temp = 0;
    double x1 = 0;
    double x2 = 0;

    temp = b * b - 4 * a *c;
    x1 = (-b + sqrt(temp)) / 2 * a;
    x2 = (-b - sqrt(temp)) / 2 * a;
    printf("x1 = %lf, x2 = %lf\n", x1, x2);
    return 0;
}


int way2(double a, double b, double c)
{
    double temp = 0;
    double re = 0;
    double im = 0;

    temp = b * b - 4 * a *c;
    temp *= -1;
    re = -b / 2 * a;
    im =  sqrt(temp) / 2 * a;
    printf("x1 =%lf - %lfi, x2 = %lf + %lfi\n", re, im, re,im);
    return 0;
}


int way0(double a, double b, double c)
{
    double x1 = 0;
    double x2 = 0;

    x1 = -b / 2 * a;
    x2 = -b / 2 * a;
    printf("x1 = %lf, x2 = %lf", x1, x2);
    return 0;
}
