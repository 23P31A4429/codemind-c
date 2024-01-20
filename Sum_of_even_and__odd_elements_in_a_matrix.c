#include<stdio.h>
int main()
{
    int i,j,r,c,sumeven=0,sumodd=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                sumeven=sumeven+a[i][j];
            }
            else if(a[i][j]%2==1)
            {
                sumodd=sumodd+a[i][j];
            }
        }
    }
    printf("%d ",sumeven);
    printf("%d",sumodd);
}