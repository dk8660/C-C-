#include <stdio.h>
int main() {
	int i=1;
	int j,k;
	while(i<=7)
	{
		for(j;j<7-i;j++)
			printf(" ");
		for(k;k<i;k++)
			printf("*");
		printf("\n");
		i+=1;
		j=0;
		k=0;
	}
	return 0;
}
