#include<stdio.h>
int main()
{
   int n,i,s;
   printf("enter the table required");
   scanf("%d",&n);
   printf("enter the no of steps required");
   scanf("%d",&s);
   while(i<=s)
   {
   	printf("%d*%d=%d\n",n,i,n*i);
   i++;
   }
}
