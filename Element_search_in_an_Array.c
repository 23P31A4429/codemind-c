#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int search,flag;
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}