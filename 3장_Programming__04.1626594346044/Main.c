#include <stdio.h>
int main() 
{
  double a;
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &a);
		
	double b = a - 32;
	double c = b * 5/9;
	
	printf("섭씨값은 ");
	printf("%lf",c);
	printf("도입니다.");
	
	return 0;
}
