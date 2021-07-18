#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[100];
	char seps[] = " ,\t\n";
	char *token;
	int count = 0;
	strcpy(str, "HanKUK UniveSity OF ForeigN studies wAs Founded IN 1954");

	for(int i=0;i<100;i++) {
		if(isupper(str[i])!=0) {
			str[i] = tolower(str[i]);
		}
	}
	printf("%s\n",str);
	token = strtok(str,seps);
	while(token!=NULL) {
		count++;
		token = strtok(NULL,seps);
	}
	printf("단어의 수는 %d입니다.",count);
	return 0;
}
