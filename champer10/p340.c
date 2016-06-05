/*************************************************************************
	> File Name: p340.c
	> Author: 
	> Mail: 
	> Created Time: Sat 26 Mar 2016 07:02:35 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *in, *out;
    char ch, infile[10], outfile[10];
    printf("please input filename: ");
    scanf("%s", infile);
    printf("please input out filename: ");
    scanf("%s", outfile);

    if ((in = fopen(infile,"r")) == NULL)
    {
        printf("open error!");
        exit(0);
    }

    if ((out = fopen(outfile,"w")) == NULL)
    {
        printf("open error!");
        exit(0);
    }
    while (!feof(in))
    {
        ch = fgetc(in);
        fputc(ch,out);
        putchar(ch);
    }

    putchar(10);
    fclose(in);
    fclose(out);
    return 0;
}
