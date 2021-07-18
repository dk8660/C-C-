#include <stdio.h>
int main() {
	char str[100];
 
	printf("공백 문자가 있는 문자열을 입력하시오: ");
	scanf("%[^\n]s",str);
	for(int i=0; str[i] != NULL; i++) {
		if(str[i] == ' ')
			continue;
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
