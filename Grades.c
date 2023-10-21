#include<stdio.h>
int main()
{
    int p,c,b,m,s;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&s);
    float d=((p+c+b+m+s)*100.0)/500;
    if(d>=90)
    {
        printf("Grade A");
    }
    else if(d>=80 && d<90)
    {
        printf("Grade B");
    }
    else if(d>=70 && d<80)
    {
        printf("Grade C");
    }
    else if(d>=60 && d<70)
    {
        printf("Grade D");
    }
    else if(d>=40 && d<50)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}