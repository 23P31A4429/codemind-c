#include<stdio.h>
int main()
{
    int i,j,a,b,sum1=0,sum2=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
       if(a%i==0)
       {
           sum1=sum1+i;
        }
    }
    for(j=1;j<b;j++)
    {
         if(b%j==0)
           {
               sum2=sum2+j;
           }
    }
     if(sum1==b && sum2==a)
       {
            
           printf("Amicable");
       }
       else
       {
           printf("Not Amicable");
       }
}