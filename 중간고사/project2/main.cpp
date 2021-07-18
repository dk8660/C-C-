#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fruits_count.h"


int main() {
	srand((unsigned)time(NULL));
	int num = (rand() % 51) + 50;
#ifdef DEBUG
	printf("num = %d\n", num);
#endif
	char fruits[6][10] = {
		"banana",
		"mango",
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	FILE* fp = NULL;
	fp = fopen("fruits.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	for (int i=0; i < num; i++) {
		int j = (rand() % 6);
		fputs(fruits[j], fp);
		fputs(" ", fp);/*띄어쓰기를 이용하여 토큰을 분리한다*/
	}
	fclose(fp);
	fruits_count(fruits, num);
	printf("\n컴퓨터프로그래밍 평가 과제 제출합니다.\n");
	printf("학과:컴퓨터전자시스템공학부\n");
	printf("학년:1학년\n");
	printf("학번:202000447\n");
	printf("이름:김대한\n");
	return 0;
}