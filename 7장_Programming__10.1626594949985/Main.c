#include <stdio.h>
int main() {
	double x,y;
	double result = 1;
	printf("실수의 값을 입력하시오: ");
	scanf("%lf",&x);
	printf("거듭제곱횟수를 입력하시오: ");
	scanf("%lf",&y);
	for(int i=0;i<y;i++)
		result *= x;
	printf("결과값은 %lf\n",result);
	return 0;
}
