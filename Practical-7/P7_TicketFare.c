#include<stdio.h>
int main()
{
    const int fare=300;
    int age,people,i,Total=0;
    printf("Enter total no. of people in group : ");
    scanf("%d",&people);
   	for(i=1;i<=people;i++)
	{
		r:
		printf("\nEnter Age(in Years) of Person-%d : ",i);
		scanf("%d",&age);

		if( age<=0 || age>=120 )
		{
			printf("\nInvalid Age Entered!\n");
			goto r;
		}

		else if( age<12 || age>=60 )
		{
			printf("\nNo Fare is required, Free Entry.\n");
		}

		else
		{
			printf("\nYour fare for entry is Rs.%d/-.\n",fare);
			Total+=fare;
		}
	}
	printf("\nTotal fare = Rs. %d/-\n",Total);

	return 0;
}
