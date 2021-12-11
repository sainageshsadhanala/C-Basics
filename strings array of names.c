#include<stdio.h>
#include<string.h>
void main()
{
	char s[10][100];
	int n,i;
	printf("enter no of names");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%[^\n]s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		puts(s[i]);
	}
}
