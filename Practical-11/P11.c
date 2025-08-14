#include<stdio.h>
int main()
{
    float marks;

    r:
    printf("\nEnter marks : ");
    scanf("%f",&marks);

    if(marks>=0 && marks<=100)
    {
        printf("Grade - ");
        (marks>=90)? printf("A\n") :
            (marks>=80 && marks<90)? printf("B\n") :
                (marks>=70 && marks<80)? printf("C\n") :
                    (marks>=60 && marks<70)? printf("D\n") : printf("F\n") ;
    }
    else
    {
        printf("Invalid marks!\n");
        goto r;
    }
    return 0;
}
