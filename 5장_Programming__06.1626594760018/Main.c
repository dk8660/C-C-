#include <stdio.h>
int main() {
	int input;
	printf(" 정수를 입력하시오:");
	scanf("%d",&input);
	int _input = -input;
	printf("2의 보수: %d \n",_input);
	return 0;
}
