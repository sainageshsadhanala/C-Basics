#include<stdio.h>
int main()
{
	int f,l;
	printf("enter first and last numbers");
	scanf("%d%d",&f,&l);
	do
	{
		if(f%2==0)
		{
		printf("%d\t",f);
	    }
		f++;  
	}while(f<=l);
}
