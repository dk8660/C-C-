// 간단한 산술 계산기 프로그램

#include <stdio.h>
int main(void)
{

	char op;
	int x, y, result;
	do
	{
		printf("*****************\n");
		printf("A---- Add \n");
		printf("S---- Subtract \n");
		printf("M---- Multiply \n");
		printf("D---- Divide \n");
		printf("Q---- Quit \n");
		printf("*****************\n");
		printf("연산을 선택하시오:");
		scanf("%c",&op);
	} while(op!='A'&&op!='S'&&op!='M'&&op!='D'&&op!='Q');
	printf("\n두수를 공백으로 분리하여 입력하시오: ");
	scanf("%d %d",&x,&y);
	
	switch(op)
	{
		case 'A':
			result = x + y;
			break;
		case 'S':
			result = x - y;
			break;
		case 'M':
			result = x * y;
			break;
		case 'D':
			result = x / y;
			break;
		case 'Q':
			break;
	
	}
	printf("\n%d\n",result);
	return 0;
}