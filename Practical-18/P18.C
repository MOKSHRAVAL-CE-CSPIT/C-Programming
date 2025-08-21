#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j,m,n;
	clrscr();
	printf("Enter Vertical Limit of Table:");
	scanf("%d",&m);
	printf("Enter Horizontal Limit of Table:");
	scanf("%d",&n);

	while(i<=m)
	{
		j=1;
		while(j<=n)
		{
			printf("%3d",(i*j));
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}