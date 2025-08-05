#include<stdio.h>
int main()
{
    float amt;

    printf("Enter your Total Bill:");
    scanf("%f",&amt);

    if(amt<=1000)
    {
        printf("No discount available.\nAmount to be paid = %.2f",amt);
    }
    else if(amt>1000 && amt<=5000)
    {
        printf("You will get a discount of 10%%.");
        amt*=(0.9);
        printf("\nAmount to be paid = %.2f",amt);
    }
    else if(amt>5000)
    {
        printf("You will get a discount of 20%%.");
        amt*=(0.8);
        printf("\nAmount to be paid = %.2f",amt);
    }

    printf("\n\nCode written by,\nName: Moksh Raval\nID : 25TCEAE4\nDept.: CE-CSPIT.");

    return 0;
}
