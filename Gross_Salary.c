#include<stdio.h>
int main()
{
    int g;
    scanf("%d",&g);
    float s=g+g*0.2+g*0.8;
    if(g<=10000)
    {
        printf("%.2f",s);
    }
    else if(g<=20000)
    {
        printf("%.2f",g+g*0.9+g*0.25);
    }
    else 
    {
        printf("%.2f",g+g*0.95+g*0.3);
    }
}