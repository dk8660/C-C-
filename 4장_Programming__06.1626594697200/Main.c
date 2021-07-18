#include <stdio.h>
int main() {
	double a, b;
	a = 3.32;
	b = 9.76;
	
	double c;
	c = a*1e-3 + b*1e-8;
	printf("%.6lf", c);
	return 0;
}
