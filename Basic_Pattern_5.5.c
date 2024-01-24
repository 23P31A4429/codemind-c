#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d",n-i);
        }
        printf("
");
    }
}