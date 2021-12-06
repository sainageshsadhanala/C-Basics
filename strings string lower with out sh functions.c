#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	printf("enter a string");
	gets(s);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	puts(s);
}
