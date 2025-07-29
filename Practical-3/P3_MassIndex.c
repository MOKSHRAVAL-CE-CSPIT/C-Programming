#include<stdio.h>
#include<math.h>

int main()
{
    float BMI , weight , height ;


    printf("Enter your weight : ");
    scanf("%f",&weight);

    printf("Enter your height : ");
    scanf("%f",&height);

    if(weight<=0 || height<=0 )
    {
        printf("Invalid Input Error!");

        return 0;
    }
    else
    {
        BMI = weight/pow(height,2) ;

        printf("\n\nBody Mass Index = %.2f ", BMI );

        if( BMI < 18.5 )
        {
            printf("\nYou are Underweight.");
        }
        else if( BMI >= 18.5 && BMI < 25 )
        {
            printf("You have Healthy Weight.");
        }
        else
        {
            printf("You are Overweight.");
        }

        return 0;
    }
}
