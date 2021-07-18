#include <stdio.h>
int main() {
	char input[100];
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s",input);
	int count = 0;
	for(int i = 'a';i<='z';i++) {
		count = 0;
	for(int j=0;input[j]!=NULL;j++) {
		if(input[j] == i)
			count++;
		}
		printf("%c: %d\n",i,count);
	}

	return 0;
}
