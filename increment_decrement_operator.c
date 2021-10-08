#include<stdio.h>
int main()
{
int a,b;
	printf("enter number\n");
	scanf("%d",&a);

	printf("a++=%d\nb=%d\n",a++,b=a);
	printf("++a=%d\nb=%d\n",++a,b=a);
	printf("a--=%d\nb=%d\n",a--,b=a);
	printf("--a=%d\nb=%d\n",--a,b=a);
}
