#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("0 ",i);
            }
            else
            {
                printf("1 ",i);
            }
        }
        printf("
");
    }
}