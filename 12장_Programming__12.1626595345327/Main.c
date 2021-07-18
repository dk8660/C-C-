#include <stdio.h>
#include <string.h>
#include <ctype.h>
void lower(char* str) {
	int i;

	for(i=0; str[i] != NULL; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}
int main() {
	char input[100];
	printf("성과 이름을 대문자로 입력하시오: ");
	scanf("%[^\n]s",input);
	int i;
	/*for(i=0;input[i] != NULL;i++) {
		if(isupper(input[i]))
			tolower(input[i]);
	} 이 코드는 왜 작동을 안하는 걸까요?*/
	lower(input);
	char delimit[] = " ";
	char *token;
	char *name[100] = {NULL};

	i = 0;
	token = strtok(input, delimit);
	for(i=0;token != NULL;i++) {
		name[i] = token;
		token = strtok(NULL, delimit);
	}
	printf("%s, %s",name[1], name[0]);

	return 0;
}
