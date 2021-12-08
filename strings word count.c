#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	gets(a);
	int i,w=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
		{
			w++;
		}
	}
	printf("no of words in string=%d",w);
}
