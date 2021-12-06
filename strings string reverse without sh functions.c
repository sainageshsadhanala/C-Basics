#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],temp;
	int i,len;
	printf("enter a string");
	gets(s1);
	len=strlen(s1);
	for(i=0;i<=(len/2);i++)
	{
		temp=s1[i];
		s1[i]=s1[len-i-1];
		s1[len-i-1]=temp;
	}
	puts(s1);
}
