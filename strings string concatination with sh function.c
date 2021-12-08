#include<stdio.h>
#include<string.h>
void main()
{
	char a[10],b[10];
	gets(a);
	gets(b);
	strcat(a,b);
	puts(a);
}
