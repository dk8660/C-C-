#include <stdio.h>
#include <ctype.h>
int str_upper(char *s) {
	for(int i = 0;s[i] != NULL;i++) {
		if(islower(s[i]))
			s[i] = toupper(s[i]);
	}	
	printf("변환된 문자열: ");
	for(int i=0;s[i] != NULL;i++)
		putchar(s[i]);
	printf("\n");
	return 0;
}
int main() {
	char input[100];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s",input);
	str_upper(input);
	
	
	return 0;
}
