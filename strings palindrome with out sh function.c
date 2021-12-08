#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	gets(a);
	int i,len;
	len=strlen(a);
	for(i=0;i<(len/2);i++)
	{
		if(a[i]!=a[len-1-i])
		{
			break;
		}
	}
	if(i == (len/2))
	{
		printf("palindrome string");
	}
	else
	{
		printf("not a palindrome string");
	}
	
}
