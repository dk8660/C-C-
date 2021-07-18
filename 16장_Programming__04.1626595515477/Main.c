#include <stdio.h>
#define Pi 3.14
#define CYLINDER(r,h) Pi*r*r*h
int main() {
	int r,h;
	printf("원기둥의 반지름과 높이를 입력하세요: ");
	scanf("%d %d",&r,&h);
	int result = CYLINDER(r,h);
	printf("원기둥의 부피 = %d\n",result);
	return 0;
}
