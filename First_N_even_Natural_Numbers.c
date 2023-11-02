#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n*2;i>=1;i-=2)
    {
        printf("%d ",i);
    }
}