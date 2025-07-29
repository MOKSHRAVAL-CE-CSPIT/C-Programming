#include<stdio.h>
int main()
{
    float c,f;

    printf("Enter the tempreture in Celcius : ");
    scanf("%f",&c);

    f = ((c*9)/5)+32;

    printf("Tempreture in Fahrenheit = %.2f",f);

    return 0;
}
