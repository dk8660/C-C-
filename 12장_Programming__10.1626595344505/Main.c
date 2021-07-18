#include <stdio.h>
#include <string.h>
void lower(char* str) {
	int i;

	for(i=0; str[i] != NULL; i++) {
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}
void judge(char *s) {
	int i, equal = 0;

	for(i=0;i < strlen(s)/2;i++) {
		if(s[i] == s[strlen(s) - 1 - i])
			equal += 0;
		else
			equal++;
	}
	if(equal == 0)
		printf("회문입니다. \n");
	else
		printf("회문이 아닙니다. \n");
}

int main() {
	char input[100];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s",input);
	int i;
	/*for(i=0;input[i] != NULL;i++)
		if(islower(input[i]))
			toupper(input[i]);왜 작동을 안할까요?*/
	lower(input);
	judge(input);
	return 0;
}
