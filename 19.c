#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=4-i&&j<=6+i||j>=14-i&&j<=15+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(i=4;i<=4;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=5&&j<=12)
            {
                printf(" MySirG ");
                j=13;
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=5;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j>=i-3&&j<=23-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}