#include <stdio.h>
int main() {
	int a;
	int b;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	
	printf('정수를 입력하시오: ');
	scanf("%d", &b);
	
	if (a%b == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");
	
	return 0;
}
/*Visual Studio에서 돌리면 돌아가는데 왜 여기는 안되는 걸까요??*/