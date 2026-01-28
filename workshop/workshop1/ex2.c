// in ra gia tr? max trong 3 s? th?c a,b,c
//
#include <stdio.h> 
int main () {
	float a,b,c,max;
	printf ("Nhap a,c,b :");
	scanf ("%f %f %f",&a,&b,&c);
	max=a; 
	if (max<b)
	{
		max = b;
	}
	if (max<c )
	{
		max = c;
	}
	printf ("Gia tri max la: %.2f",max);
	return 0;
} 