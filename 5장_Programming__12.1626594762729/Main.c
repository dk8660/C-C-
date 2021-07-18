#include <stdio.h>
int main() {
	char input1,input2,input3,input4;
	input1 = 0;
	input2 = 0;
	input3 = 0;
	input4 = 0;
		
	printf(" 첫번째 문자를 입력하시오: ");
	scanf("%s",&input1);
	
	printf("두번째 문자를 입력하시오: ");
	scanf("%s",&input2);
	
	printf("세번째 문자를 입력하시오: ");
	scanf("%s",&input3);
	
	printf("네번째 문자를 입력하시오: ");
	scanf("%s",&input4);
	
	unsigned int result = ((unsigned int)input1) | ((unsigned int)input2<<8) | ((unsigned int)input3<<16) | ((unsigned int)input4<<24);
	printf("결과값: %0x \n",result);
	return 0;
}
