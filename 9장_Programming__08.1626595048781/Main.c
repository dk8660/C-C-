#include <stdio.h>
int count(int n, int i) {

	if(n/10>=1) {
		i++;
		count(n/10,i);
		
	}
	else
		printf("자리수의 개수: %d\n",i);
	
}
int main() {
	int n;
	int i=1;
	printf("정수를 입력하시오: ");
	scanf("%d",&n);
	count(n,i);
	return 0;
}
