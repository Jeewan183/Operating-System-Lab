#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;

    fp =fopen("one.txt","w");
    if(fp == NULL)
    {
        printf("\nError in opening");
    }
    else
    {
        while ((ch == getc(stdin))!=EOF)
        {
            fputc(ch,fp);
        }
    }
    fclose(fp);

    fp = fopen("one.txt","r");
    if(fp == NULL)
    {
        printf("Error");
    }
    else
    {
        while((ch = fgetc(fp))!=EOF)
        {
            printf("\n%c",ch);
        }
    }
}