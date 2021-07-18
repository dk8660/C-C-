#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fruits_count.h"

void fruits_count(char fruits[][10],int num) {
	FILE* fp;
	int count[6] = { 0 };
	char buffer[1050];
	int sum = 0;
	int i = 0;
	int result = 0;
	fp = fopen("fruits.txt", "r");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");
	fgets(buffer, 1050, fp);
	char *ptr = strtok(buffer, " ") ;/*��ū�� �̿��Ͽ� ������ ������ ����*/
	while (ptr != NULL) {
#ifdef DEBUG
		printf("%d��°: %s\n", i, ptr);
		i++;
#endif
		for (int k = 0; k < 6; k++) {/*ptr == fruits[k]      ("%s",ptr) == ("%s",fruits[k]) �� ���� �پ��� ����� ����غ����� ���ڸ� ���°��� �Ұ����Ͽ��� strcmp���θ� �ذ��� �� �־���.*/
			result = strcmp(ptr, fruits[k]);
			if (result == 0)
				count[k]++;
		}
		ptr = strtok(NULL, " ");

	}
	printf("file name:fruits.txt\n");
	for (i = 0; i < 6; i++) {/*������ �� ������ ���� �κ�*/
		printf("%s %d ��\n", fruits[i], count[i]);
		sum += count[i];
	}
	printf("\n��ü ���� ������ %d�̴�.\n", sum);
	fclose(fp);
#ifdef DEBUG
	printf("num = %d\n", num);
#endif
}