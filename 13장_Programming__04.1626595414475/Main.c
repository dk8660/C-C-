#include <stdio.h>
struct complex {
	double real;
	double imag;
};

void complex_add(struct complex c1, struct complex c2) {
	struct complex sum;
	sum.real = c1.real + c2.real;
	sum.imag = c1.imag + c2.imag;
	printf("%lf+%lfi\n",sum.real,sum.imag);
}
int main() {
	
	struct complex c1 = {1.0, 2.0};
	struct complex c2 = {2.0, 3.0};
	printf("%lf+%lfi\n",c1.real,c1.imag);
	printf("%lf+%lfi\n",c2.real,c2.imag);
	complex_add(c1,c2);
	return 0;
}
