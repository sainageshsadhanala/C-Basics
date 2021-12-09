#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],sub[100];
	int i,len_s,len_sub;
	printf("ENTER A STRING");
	gets(s);
	len_s=strlen(s);
	printf("enter the length of sub string from right side(last)");
	scanf("%d",&len_sub);
	for(i=0;i<len_sub;i++)
	{
		sub[i]=s[len_s-len_sub+i];
	}
	printf("%s",sub);
}
