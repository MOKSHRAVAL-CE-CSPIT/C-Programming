#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,i=1,j;
	clrscr();

	r1:
	printf("Enter vertical limit:");
	scanf("%d",&m);
	if(m<=0)
	{
		printf("Invalid vetical limit!");
		goto r1;
	}

	r2:
	printf("Enter horizontal limit:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid horizontal limit!");
		goto r2;
	}

	while(i<=m)
	{
		j=1;
		while(j<=n)
		{
			printf("%3d",i*j);
			j++;
		}printf("\n");
		i++;
	}
	getch();
}