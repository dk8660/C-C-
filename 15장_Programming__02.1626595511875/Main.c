#include <stdio.h>
#include <ctype.h>
#define SIZE 10
int main() {
	FILE *fp1;
	FILE *fp2;
	char fname1[SIZE] = "file1.txt";
	char fname2[SIZE] = "file2.txt";
	
	if((fp1 = fopen(fname1, "r")) == NULL)
		printf("%s 파일 열기 실패\n",fname1);
	if((fp2 = fopen(fname2, "r")) == NULL)
		printf("%s 파일 열기 실패\n",fname2);
	
	while(feof(fp1) == 0)
		fputc(toupper(fgetc(fp1)), fp2);
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}