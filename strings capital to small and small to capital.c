#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i;
	printf("ENTER A STRING");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(65<=s[i] && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
		else if(97<=s[i] && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		else
		{
		}
	}
	puts(s);
}
