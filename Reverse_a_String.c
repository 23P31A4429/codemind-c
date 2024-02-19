#include<stdio.h>
#include<string.h>
int main()
{
    int i;
	char rev,str[20];
	scanf("%[^
]s",str);
	char l=strlen(str);
	for(i=0;i<l/2;i++)
	{
	    rev=str[i];
	    str[i]=str[l-1-i];
	    str[l-1-i]=rev;
	}
	printf("%s",str);
}