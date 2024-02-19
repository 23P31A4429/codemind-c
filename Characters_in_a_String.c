#include<stdio.h>
int main()
{
    int i,len=0;
    char str[50];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        len++;
    }
    printf("%d",len);
}