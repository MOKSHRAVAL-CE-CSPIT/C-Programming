#include<stdio.h>
int main()
{
    float celsius , fahrenheit ;

    printf("Enter the tempreture in Celcius : ");
    scanf("%f",&celsius);

    fahrenheit = ((celsius*9)/5)+32;

    printf("Tempreture in Fahrenheit = %.2f",fahrenheit);

    return 0;
}
