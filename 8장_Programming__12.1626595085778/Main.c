#include <stdio.h>
void print_value(int n) {
	for(int i=0;i<n;i++)
		printf("*");
}
int main() {
	int n;
	int a=1;
	while(a==1) {
	printf("값을 입력하시오(종료는 음수): ");
	scanf("%d",&n);
	if(n>=0) {
		print_value(n);
		printf("\n");
	}
	else
		a=0;
	}
	
	return 0;
}
