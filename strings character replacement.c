#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],character_substituted,character_replaced;
	int i;
	printf("ENTER A STRING");
	scanf("%[^\n]s",s);
	fflush(stdin);
	printf("enter the character to be replaced");
	scanf("%c",&character_replaced);
	fflush(stdin);
	printf("enter the character to be substituted");
	scanf("%c",&character_substituted);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==character_replaced)
		{
			s[i]=character_substituted;
		}
	}
	puts(s);
}
