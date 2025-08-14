#include<stdio.h>
#include<conio.h>
void main()
{
	int i;

	clrscr();

	for(i=10;i<=100;i+=10)
	{
		printf("Current Water Level : %d\n",i);
	}
	printf("Tank is Full.");

	getch();
}