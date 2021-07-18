#include <stdio.h>
int main() {
	int h;
	printf(" 키를 입력하시오(cm):");
	scanf("%d",&h);
	double ft = 0.032808 * h;
	double in = 0.393701 * h;
	
	printf("%dcm는 %d피트 %lf인치입니다.\n",h,(int)ft,in);
	return 0;
}
