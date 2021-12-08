#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	gets(a);//sadhanala gangadhar sai nagesh
	int f,l,i;
	printf("enter the initial and final index number for sub string");
	scanf("%d%d",&f,&l);//10,18
	/*for(i=0;i<=(l-f);i++)
	{
		b[i]=a[f+i];
	}
	b[i]='\0';*/
	
	int j=0;
	for(i=f;i<=l;i++)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	puts(b);
}
