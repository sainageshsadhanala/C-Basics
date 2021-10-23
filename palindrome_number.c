#include<stdio.h>
int main()
{

int n,r,sum=0,n2;
printf("enter a number");
scanf("%d",&n);
n2=n;
for(n=n;n!=0;n=n/10)//reversing digits of number
{
	r=n%10;//getting digits
	sum=sum*10+r;
}
if(sum==n2)
{
	printf("%d is a palindrome number",n2);
}
else
{
	printf("%d is not a palindrome",n2);
}
}
