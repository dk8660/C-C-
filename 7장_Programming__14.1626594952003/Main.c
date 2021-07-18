#include <stdio.h>
int main() {
	int x,y;
	int a=1;

	printf("정수를 입력하시오: ");
	scanf("%d",&x);
	do
	{
		y=x/a;
		y%=10;
		printf("%d",y);
		a*=10;
		
	} while(x>a);
	return 0;
}
