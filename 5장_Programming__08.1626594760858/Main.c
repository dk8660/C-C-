#include <stdio.h>
#define pi 3.141592
int main() {
	double r;
	printf(" 구의 반지름을 입력하시오: ");
	scanf("%lf",&r);
	double A = 4*pi*r*r;
	double B = (4.0/3.0)*pi*r*r*r;
	
	printf("표면적은 %lf입니다.\n",A);
	printf("체적은 %lf입니다.\n",B);

	return 0;
}
