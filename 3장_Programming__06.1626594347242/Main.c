#include <stdio.h>
int main() 
{
	double a;
	printf("몸무게를 입력하세요(단위: Kg): ");
	scanf("%lf",&a);
	
	double b = a * 17/100;
	
	printf("달에서의 몸무게는 ");
	printf("%lf",b);
	printf(" Kg 입니다.");

	printf("\n계속하려면 아무 키나 누르십시오 . . .");
		
	return 0;
}
