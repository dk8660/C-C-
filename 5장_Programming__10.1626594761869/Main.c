#include <stdio.h>
int main() {
	int x,y;
	printf(" x 좌표를 입력하시오: ");
	scanf("%d",&x);
	printf("y 좌표를 입력하시오: ");
	scanf("%d",&y);
		
	int result1 = (x>0 && y>0) ? 1:0;
	int result2 = (x<0 && y>0) ? 1:0;
	int result3 = (x<0 && y<0) ? 1:0;
	int result4 = (x>0 && y<0) ? 1:0;
	printf("%s", (result1 == 1) ? "1 사분면":"");
	printf("%s", (result2 == 1) ? "2 사분면":"");
	printf("%s", (result3 == 1) ? "3 사분면":"");
	printf("%s", (result4 == 1) ? "4 사분면":"");
	return 0;
}
