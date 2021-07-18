#include <stdio.h>
int check_alpha(int a) {
	if(a>=97&&a<=122)
		return 1;
	else
		return 0;
}

int main() {
	char a;
	printf("문자를 입력하시오: ");
	scanf("%c",&a);
	if(check_alpha(a)==1)
		printf("%c는 알파벳 문자입니다.",a);
	else
		printf("%c는 알파벳 문자가 아닙니다.",a);
	
	return 0;
}
