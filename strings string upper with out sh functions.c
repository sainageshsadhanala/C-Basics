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
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	puts(s);
}
