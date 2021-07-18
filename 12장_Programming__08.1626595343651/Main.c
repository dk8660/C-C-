#include <stdio.h>
#include <ctype.h>
int count(char *s) {
	int i, wc = 0, waiting = 1;
	
	for(i=0;s[i] != NULL;i++) {
		if(isalpha(s[i])) {
			if(waiting == 1) {
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	}
	return wc;
}
int main() {
	char input[100];
	int c;
	printf("문자열을 입력하시오: ");
	scanf("%[^\n]s",input);
	c = count(input);
	printf("단어의 수는 %d입니다.\n", c);
	return 0;
}
