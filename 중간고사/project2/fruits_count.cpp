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
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");
	fgets(buffer, 1050, fp);
	char *ptr = strtok(buffer, " ") ;/*토큰을 이용하여 과일의 개수를 센다*/
	while (ptr != NULL) {
#ifdef DEBUG
		printf("%d번째: %s\n", i, ptr);
		i++;
#endif
		for (int k = 0; k < 6; k++) {/*ptr == fruits[k]      ("%s",ptr) == ("%s",fruits[k]) 등 정말 다양한 방법을 사용해봤지만 숫자를 세는것이 불가능하였고 strcmp으로만 해결할 수 있었다.*/
			result = strcmp(ptr, fruits[k]);
			if (result == 0)
				count[k]++;
		}
		ptr = strtok(NULL, " ");

	}
	printf("file name:fruits.txt\n");
	for (i = 0; i < 6; i++) {/*과일의 총 개수를 세는 부분*/
		printf("%s %d 개\n", fruits[i], count[i]);
		sum += count[i];
	}
	printf("\n전체 과일 개수는 %d이다.\n", sum);
	fclose(fp);
#ifdef DEBUG
	printf("num = %d\n", num);
#endif
}