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
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");
	for (int i=0; i < num; i++) {
		int j = (rand() % 6);
		fputs(fruits[j], fp);
		fputs(" ", fp);/*���⸦ �̿��Ͽ� ��ū�� �и��Ѵ�*/
	}
	fclose(fp);
	fruits_count(fruits, num);
	printf("\n��ǻ�����α׷��� �� ���� �����մϴ�.\n");
	printf("�а�:��ǻ�����ڽý��۰��к�\n");
	printf("�г�:1�г�\n");
	printf("�й�:202000447\n");
	printf("�̸�:�����\n");
	return 0;
}