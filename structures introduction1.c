#include<stdio.h>
#include<conio.h>
struct student
	{
		char name[100];
		int age;
		float fee;
	};
void main()
{
	struct student s1={"aditya",20,45000
	};
	printf("%s\n%d\n%.f",s1.name,s1.age,s1.fee);
}
