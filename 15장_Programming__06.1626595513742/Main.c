#include <stdio.h>
#define SIZE 20
int main() {
	FILE *fp;
	char fname[SIZE];
	char buffer[SIZE];
	int count = 0;
	
	printf("파일 이름을 입력하세요: ");
	scanf("%s",fname);

	if(fp = fopen(fname, "r") == NULL)
		printf("%s 파일 열기 실패", fname);
	
	while(!feof(fp)) {
		char tmp = fgetc(fp);
		if(isprint(tmp) != 0)
			count++;
	}
	printf("인쇄 가능한 문자들의 개수: %d",count);
	fclose(fp);
	return 0;
}
