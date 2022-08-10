#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {k=1;
        for(j=1;j<=7;j++)
        {

         if(j>=1&&j<=5-i||j>=3+i&&j<=7)
         {
            if(j<=4)
             {
                printf("%d",k);
                k++;
             }
             else
             {  if(i==1)
                {
                    k--;
                    printf("%d",k-1);
                }    
                else
                {
                    k--;
                    printf("%d",k);
                }

             }
         }
         else
         {
            printf(" ");
         }

        }
        printf("\n");
    }
    
}