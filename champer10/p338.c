/*************************************************************************
	> File Name: p338.c
	> Author: 
	> Mail: 
	> Created Time: Sat 26 Mar 2016 06:49:40 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch, filename[10];
    printf("please input filename");
    scanf("%s", filename);
    if ((fp = fopen(filename,"w")) == NULL)
    {
        printf("open error!");
        exit(0);
    }

    ch = getchar();
    printf("please input a string end of #: ");
    ch = getchar();
    while (ch != '#')
    {
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }

    fclose(fp);
    putchar(10);
    return 0;
}
