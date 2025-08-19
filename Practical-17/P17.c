#include<stdio.h>
#include<Windows.h>
int main()
{
	float distance,i=0.5f;
	printf("Enter distance to be covered : ");
	scanf("%f",&distance);
	while(1)
	{
		Sleep(1000);
		printf("\nMinute %.f : Distance Covered = %.1f km",(i*2),i);

		if(i<distance)
			i+=0.5f;
		else
			break;
	}
	printf("\nMarathon Completed!");
	return 0;
}
