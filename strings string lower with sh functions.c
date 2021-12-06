#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	printf("enter a string");
	gets(s);
	strlwr(s);
	puts(s);
}
