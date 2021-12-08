#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	int len,i;
	len=strlen(a);
	for(i=0;b[i]!='\0';i++)
	{
		a[len+i]=b[i];
	}
	a[len+i]='\0';
	puts(a);
}
