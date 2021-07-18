#include <stdio.h>
#define pi 3.14
struct point {
	int x,y;
};
struct circle {
	struct point center;
	double radius;
};

double area(struct circle c) {
	double c_area;
	c_area = pi*c.radius*c.radius;

	return c_area;
}
double perimeter(struct circle c) {
	double c_peri;
	c_peri = 2*pi*c.radius;

	return c_peri;
}
int main() {
	struct circle c;
	double c_area,c_peri;
	
	printf("원의 중심점: ");
	scanf("%d %d",&c.center.x,&c.center.y);
	printf("원의 반지름: ");
	scanf("%lf",&c.radius);
	c_area = area(c);
	c_peri = perimeter(c);
	printf("원의 면적=%lf, 원의 둘레=%lf \n",c_area,c_peri);
	return 0;
}
