#include <stdio.h>
#include <string.h>
#define SIZE 20
int main() {
	FILE *fp1;
	FILE *fp2;
	char fname1[SIZE];
	char fname2[SIZE];
	char buffer1[SIZE];
	char buffer2[SIZE];
	
	printf("첫 번째 파일의 이름을 입력해주세요: ");
	scanf("%s",fname1);
	printf("두 번째 파일의 이름을 입력해주세요: ");
	scanf("%s",fname2);
	
	if(fp1 = fopen(fname1, "r") == NULL)
		printf("%s 파일 열기 실패\n",fname1);
	if(fp2 = fopen(fname2, "r") == NULL)
		printf("%s 파일 열기 실패\n",fname2);
	
	while(1) {
		fgets(buffer1, SIZE, fp1);
		fgets(buffer2, SIZE, fp2);
		if(strcmp(buffer1, buffer2) == 0) {
			printf("파일은 서로 일치함\n");
			break;
		}
		else {
			printf("파일이 서로 일치하지 않음\n");
			break;
		}
	}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
