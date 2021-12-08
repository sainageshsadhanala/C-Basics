#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("string is a palindrome");
	}
	else
	{
	  printf("string is not a palindrome");
	}
}
