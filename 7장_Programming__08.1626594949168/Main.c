#include <stdio.h>
int main() {
	int x;
	do
	{
		printf("막대의 높이(종료:-1): ");
		scanf("%d",&x);
		for(int i=0;i<=x;i++)
			printf("*");
		printf("\n");
	} while(x!=-1);
	return 0;
}
