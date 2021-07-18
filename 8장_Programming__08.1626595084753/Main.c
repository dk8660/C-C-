#include <stdio.h>
#include <math.h>
void sin_degree() {
	double x,y,z;
	printf("각도를 입력하시오: ");
	scanf("%lf",&x);
	y = x*3.141592/180.0;
	z = sin(y);
	printf("sin(%lf)의 값은 %lf\n",x,z);
	
}
int main() {
	double i,con,radians;
	
	for(i=0;i<190;i+=10) {
		radians = i * 3.141592/180.0;
		con = sin(radians);
		printf("sin(%lf)의 값은 %lf\n",i,con);
	}
	sin_degree();
	return 0;
}
