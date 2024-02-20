#include<stdio.h>
int main()
{
    int i,n,rev=0,digit=0;
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        if(digit>rev)
        {
            rev=digit;
        }
        n=n/10;
    }
    printf("%d",rev);
}