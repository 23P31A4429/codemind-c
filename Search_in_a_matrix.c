#include<stdio.h>
int main()
{
    int i,j,r,c,search,count=0;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&search);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(search==a[i][j])
           {
               printf("1");
               count++;
               break;
           }
        }
    }
    if(count==0) 
    {
      printf("0");
    }
}