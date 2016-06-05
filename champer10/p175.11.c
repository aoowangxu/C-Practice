/*************************************************************************
	> File Name: p175.11.c
	> Author: 
	> Mail: 
	> Created Time: Sat 26 Mar 2016 09:20:15 AM EDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i = 0;
    int flag = 0;
    char str[80], c;
    FILE *fp;
    fp = fopen("text", "w");
    flag = 1;
    while (1 == flag)
    {
        printf("input string:\n");
        gets(str);
        fprintf(fp, "%s", str);
        printf("continue!?");
        c = getchar();
        if (c == 'n' || c == 'N')
        {
            flag = 0;
        }
        getchar();
    }

    fclose(fp);
    fp = fopen("text", "r");
    while(fscanf(fp, "%s", str)!=EOF)
    {
        for(i = 0; str[i] != '\0'; ++i)
        {
            if((str[i] >= 'a') &&(str[i] <= 'z'))
            {
                str[i] -= 32;
            }
            printf("%s\n",str);
        }

    }
    fclose(fp);
    return 0;
}
