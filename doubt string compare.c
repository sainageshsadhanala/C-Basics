#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	int i=strcmp(s1,s2);
	printf("%d",i);
}

