//Program for calculation of Perimeter and Area.
#include<stdio.h>
int main()
{
	float l , b , A , P ;

	l = 60 ;
	b = 90 ;

	A = l * b ;
	P = 2 * ( l + b ) ;

	printf("\nArea = %.2f",A);
	printf("\nPerimeter = %.2f",P);

	return 0;
}
