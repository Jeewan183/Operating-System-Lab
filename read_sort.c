#include<stdio.h>
#include<string.h>

struct file 
{
    char sl;
    char name[10];
    int age;
    float percentage;
} f1[10],temp;


void main()
{
    FILE *fp;
    int i=0;
    fp = fopen("file2.txt","r");
    char c;
    int x,n=5;
    float y;
    char s1[10],s2[10],s3[10],s4[10];

    if(fp == NULL)
    {
        printf("Error");
    }
    else
    {
        fscanf(fp,"%s\t%s\t%s\t%s\n",s1,s2,s3,s4);
        printf("%s\t%s\t%s\t%s\n",s1,s2,s3,s4);

        while (!feof(fp))
        {
            fscanf(fp,"%c\t%s\t%d\t%f\n",&c,s1,&x,&y);
            f1[i].sl = c;
            strcpy(f1[i].name,s1);
            f1[i].age = x;
            f1[i].percentage = y;
            i++;
 
        }
        fclose(fp);
        for(int i=0;i<n - 1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(f1[j].age > f1[j+1].age)
                {
                    temp = f1[j];
                    f1[j] = f1[j+1];
                    f1[j+1] = temp;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%c\t%s\t%d\t%f",f1[i].sl,f1[i].name,f1[i].age,f1[i].percentage);
    }
}