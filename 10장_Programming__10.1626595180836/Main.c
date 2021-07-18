#include <stdio.h>
void vector_add(double x[], double y[], double z[]);
int main(void)
{
	double x[3]={1.0, 2.0, 3.0}; 
	double y[3]={1.0, 2.0, 3.0}; 
	double z[3]; 

	vector_mul(x, y, z);
	printf("벡터의 내적은 %lf\n", z[0]+z[1]+z[2]);
	return 0;
}

void vector_mul(double x[], double y[], double z[])
{
	z[0] =x[0]*y[0];
	z[1] =x[1]*y[1];
	z[2] =x[2]*y[2];
}