#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	int lena,lenb,i;
	lena=strlen(a);
	lenb=strlen(b);
	if(lena==lenb)
	{
	for(i=0;i<lena;i++)
	{
		if(a[i]!=b[i])
		{
			printf("strings are not equal");
			break;
		}
	}
	if(i==lena)
	   printf("both strings are same");
    }
    else
    {
    	printf("strings are not equal");
	}
}
