//Program for displaying space(in bytes) occupied by variables of different Datatypes.
#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;

	printf("\nint = %d",sizeof(a));
	printf("\nfloat = %d",sizeof(b));
	printf("\nchar = %d",sizeof(c));
	printf("\ndouble = %d",sizeof(d));
	return 0;
}
