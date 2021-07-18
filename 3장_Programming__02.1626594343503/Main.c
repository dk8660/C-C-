#include <stdio.h>
int main(void)
{
	double a;
	double b =1609;
	double c;
	
	printf("마일을 입력하시오: ");
	scanf("%lf",&a);
	
	c=a * b;
	
	printf("%.1lf",a);
	printf("마일은 ");
	printf("%lf",c);
	printf("미터 입니다.\n");
	printf("계속하려면 아무 키나 누르십시오 . . .");
	
	return 0;
	
	
}
