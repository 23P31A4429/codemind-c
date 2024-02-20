#include<stdio.h>
int main()
{
    int n,sq,sum=0,dig;
    scanf("%d",&n);
    sq=n*n;
    int r=sq;
    while(r!=0)
    {
        dig=r%10;
        sum=sum+dig;
        r=r/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}