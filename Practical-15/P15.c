#include<stdio.h>
#include<Windows.h>
int main()
{
	int i;
	printf("Enter starting time:");
	scanf("%d",&i);

	while(i>=0)
	{
		printf("\nTime : %d",i);
		Sleep(1000);
		i--;
	}
	printf("\nCountdown Completed!");
	return 0;
}
