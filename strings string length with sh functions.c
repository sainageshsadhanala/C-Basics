#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int len;
	printf("enter a string");
	gets(s);
	len=strlen(s);
	printf("string length=%d",len);
}
