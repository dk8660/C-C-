#include <stdio.h>
int main() {
	double a, b, c;
	
	printf(" 상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%lf %lf %lf",&a ,&b ,&c);
		
	double v;
	v = a*b*c;
	
  printf("상자의 부피는 ");
	printf("%lf", v);
	printf("입니다.");
		
	return 0;
}
