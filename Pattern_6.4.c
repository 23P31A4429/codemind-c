#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
  
    for(i=n;i>=1;i--)
    {
        for(j=n-i+1;j<n;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}