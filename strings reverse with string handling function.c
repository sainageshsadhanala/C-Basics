#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	scanf("%[^\n]s",s1);
	printf("%s\n",s1);
	strrev(s1);
	printf("%s",s1);
}
