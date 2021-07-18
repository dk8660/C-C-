#include <stdio.h>
#define SIZE 5
int array_sum(int *A, int size) {
	int i,sum = 0;
	for(i=0;i<size;i++) {
		sum += A[i];
	}
	return sum;
}
int main() {
	int sum;
	int a[SIZE] = {100, 200, 300, 400, 500};
	printf("a = { ");
	for(int i=0;i<SIZE;i++)
		printf("%d ",a[i]);
	printf("}\n");
	sum = array_sum(a,SIZE);
	printf("월급의 합=%d",sum);
	return 0;
}
