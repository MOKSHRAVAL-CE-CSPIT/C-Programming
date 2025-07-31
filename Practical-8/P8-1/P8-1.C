#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	clrscr();
	printf("Enter your Age:");
	scanf("%d",&age);

	(age>=60)? printf("Eligible for Senior Citizen Account.") : (age>=18)? printf("Eligible for Regular Savings") : printf("Not Eligible for Account.");
	getch();
}
