#include<stdio.h>
#include<conio.h>

void main()
{
	int age,a;
	x:
		clrscr();
		printf("\n1-Check Eligibility\n0-Exit\nEnter your Choice:");
		scanf("%d",&a);
		if(a==1)
		{
			printf("\nEnter your Age:");
			scanf("%d",&age);
			printf("\n");
			(age>=60)? printf("Eligible for Senior Citizen Account.") : (age>=18)? printf("Eligible for Regular Savings") : printf("Not Eligible for Account.");
			printf("\n\nPress Any Key to Reload.");
			getch();
			goto x;
		}

}
