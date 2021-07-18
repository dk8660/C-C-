#include <stdio.h>
#include "printm.h"
#include "fpop.h"

int main() {
	while (1) {
		printm();/*헤더 파일 printm.h로 printm.cpp에서 만든 함수와 연결*/
		printf("메뉴를 선택하시오:");
		int key;
		scanf_s("%d", &key);
		int x, y, result;
		int (*pf)(int, int);/*포인터 함수의 이용*/
		/*pf와 fpop.cpp에서 만든 함수를 switch를 이용하여 key의 값에 따라 다르게 연결하여 구현*/
		switch (key) {
		case 0:
			printf("2개의 정수를 입력하시오:");
			scanf_s("%d %d", &x, &y);
			pf = plus;
			result = pf(x, y);
			printf("연산결과=%d+%d=%d\n",x,y,result);
			break;
		case 1:
			printf("2개의 정수를 입력하시오:");
			scanf_s("%d %d", &x, &y);
			pf = minus;
			result = pf(x, y);
			printf("연산결과=%d-%d=%d\n", x, y, result);
			break;
		case 2:
			printf("2개의 정수를 입력하시오:");
			scanf_s("%d %d", &x, &y);
			pf = mul;
			result = pf(x, y);
			printf("연산결과=%d*%d=%d\n", x, y, result);
			break;
		case 3:
			printf("2개의 정수를 입력하시오:");
			scanf_s("%d %d", &x, &y);
			pf = dev;
			result = pf(x, y);
#ifdef DEBUG
			printf("%d %d %d %lf", x, y, result, result);
#endif
			printf("연산결과=%d/%d=%d\n", x, y, result);
			break;
		case 4:
			printf("컴퓨터프로그래밍 평가 과제 제출합니다\n");
			printf("학과:컴퓨터 전자시스템공학부\n");
			printf("학년:1학년\n");
			printf("학번:202000447\n");
			printf("이름:김대한\n");
			break;
		}
		printf("\n");
		if (key == 4)
			break;/*key가 4일때 while문을 종료한다*/
	}
}
