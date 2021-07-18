#include <stdio.h>
int main() {
	int input;
	
	printf("16진수 정수를 입력하시오: ");
	scanf("%x",&input);
	
	printf("8진수로는 ");
	printf("%#o\n", input);
	printf("입니다");
	
	printf("10진수로는 ");
	printf("%d\n", input);
	printf("입니다");
	
	printf("16진수로는 ");
	printf("%#x", input);
  printf("입니다");
	
	return 0;
}
