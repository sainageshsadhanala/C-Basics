#include<stdio.h>
#include<string.h>
void main()
{
	char s[10][100],temp[100];
	int n,i,j,k;
	printf("enter no of names");
	scanf("%d",&n);
	for(i=0;i<n;i++)//reading of strings
	{
		fflush(stdin);
		scanf("%[^\n]s",s[i]);
	}
	for(k=0;k<n;k++)//repeating swapping to get least one to first
	{
	for(i=0;i<n-1;i++)
	{
		for(j=0;s[i][j]!='\0';j++)//swapping of two adjacent strings
		{
			if(s[i][j]>s[i+1][j])
			{
				strcpy(temp,s[i]);
				strcpy(s[i],s[i+1]);
				strcpy(s[i+1],temp);
				break;//letter in first sentence is smaller so swapping
			}
			else if(s[i][j]<s[i+1][j])
			{
				break;//letter in first sentence is bigger so no swapping
			}
			else
			{
				/*letters are same so loop should continue to check next 
				letter*/
			}
		}
	}
    }
	for(i=0;i<n;i++)
	{
		puts(s[i]);
	}
}
