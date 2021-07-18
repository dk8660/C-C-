#include <stdio.h>
int main() {
	double input1, input2;
	printf(" 실수를 입력하시오:");
	scanf("%lf %lf",&input1,&input2);
	double plus = input1 + input2;
	double minus = input1 - input2;
	double mul = input1 * input2;
	double div = input1 / input2;
	printf("%lf %lf %lf %lf \n",plus,minus,mul,div);
	return 0;
}
