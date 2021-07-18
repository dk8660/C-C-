#include <stdio.h>
int main() {
	
	int sum = 0;
	int a=3;
	while(a<101)
	{
		sum+=a;
		a+=3;
	
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.\n",sum);
	return 0;
}
