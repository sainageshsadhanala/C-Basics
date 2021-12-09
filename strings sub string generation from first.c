#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],sub[100];
	int i,len;
	printf("ENTER A STRING");
	gets(s);
	printf("enter the length of sub string");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		sub[i]=s[i];
	}
	printf("%s",sub);
}
