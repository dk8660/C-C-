#include <stdio.h>
#include <string.h>
int main() {
	char input[100];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s", input);
	
	char find[100];
	char change[100];
	char *str[100] = {NULL};
	char *token;
	char seps[] = " ";
	int i = 0;
	token = strtok(input, seps);
	for(i=0;token != NULL;i++) {
		str[i] = token;
		token = strtok(NULL, seps);
	}

	printf("찾을 문자열: ");
	scanf("%s", find);

	printf("바꿀 문자열: ");
	scanf("%s", change);
	for(i=0;str[i] != NULL;i++) {
		if(strstr(str[i], find))
			str[i] = change;
	}
	
	printf("수정된 문자열: ");
	for(i=0;str[i] != NULL;i++)
		printf("%s ",str[i]);
	printf("\n");
	return 0;
}
