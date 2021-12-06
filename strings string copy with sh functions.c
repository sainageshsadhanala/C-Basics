#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("enter a string");
	gets(s1);
	strcpy(s2,s1);
	puts(s2);
}
