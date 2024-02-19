#include<stdio.h>
int main()
{
	char str[50];
	int i,len=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
		  len++;
	    }
	}
	printf("%d",len);        
}                     