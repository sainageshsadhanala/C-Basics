#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("both strings are same");
	}
	else
	{
	  printf("strings are different ");
	}
}
