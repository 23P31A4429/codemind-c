#include<stdio.h>
int main()
{
    int i,n,count=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2==0)
        {
            count++;
        }
        if(a[i]%2==0)
        {
            c++;
        }
    }
    if(count==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}