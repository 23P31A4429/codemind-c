#include<stdio.h>
int main()
{
    int i,n,sumeven=0,sumodd=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+a[i];
        }
        if(i%2==1)
        {
            sumodd=sumodd+a[i];
        }
    }
    printf("%d",sumeven-sumodd);
}