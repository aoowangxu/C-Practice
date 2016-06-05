/*************************************************************************
	> File Name: p344.c
	> Author: 
	> Mail: 
	> Created Time: Sat 26 Mar 2016 07:46:13 AM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[3][10];
    int i = 0;
    if ((fp = fopen("test", "r")) == NULL)
    {
        printf("can't open file!\n");
        exit(0);
    }

    while(fgets(str[i], 10, fp) != NULL)
    {
        printf("%s",str[i]);
        i++;
    }

    fclose(fp);
    return 0;
}
