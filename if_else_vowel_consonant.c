#include<stdio.h>
int main()
{
	char p;
    printf("enter a character");
	scanf("%c",&p);
    if(p=='a' || p=='e' || p=='i' || p=='o' || p=='u')
    {
    	printf("%c is a vowel",p);
	}
	else
	{
		printf("%c is consonant",p);
	}
}
