#include <stdio.h>
int main() {
	int a,b,c,n;
	a=0;
	b=1;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d",&n);
	if(n==0)
		printf("0,\n");
	else if(n==1)
		printf("0, 1,\n");
	else
	{
		printf("0, 1,");
		for (int i=0;i<(n-1);i++)
		{
			c=b+a;
			a=b;
			b=c;
			printf(" %d,",c);
		}
		printf("\n");
	}
	
	return 0;
}
