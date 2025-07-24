//Program to count Illiterate men and women.
#include<stdio.h>
int main()
{
    long int p = 1441981744 , m , w , ilm , ilw ;
	float pw = 48.4 , lrm = 80.95 , lrw = 62.84 ;

	w = (pw * p)/100;//Total No. of women.
	m = p - w;//Total No. of men.

	ilm = ((100-lrm)*m)/100 ;//Total No. of illiterate men.
	ilw = ((100-lrw)*w)/100 ;//Total No. of Illiterate women.

	printf("\nIlliterate Men = %ld",ilm);
	printf("\nIlliterate Women = %ld",ilw);

	return 0;
}
