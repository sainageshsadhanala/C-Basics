#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	int i,len;
	scanf("%[^\n]s",s1);
	printf("%s\n",s1);
	len=strlen(s1);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s1[i]);
	}
}
