#include<stdio.h>
#include<math.h>
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
        if(a[i]%2==0)
        {
            sumeven=sumeven+a[i];
        }
        if(a[i]%2==1)
        {
            sumodd=sumodd+a[i];
        }
    }
    printf("%d",abs(sumeven-sumodd));
}