#include <stdio.h>
void array_copy(int *A, int *B, int size) {
	printf("b = { ");
	for(int i=0;i<size;i++) {
		B[i] = A[i];
		printf("%d ",B[i]);
	}
	printf("}\n");
}
int main() {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5];
	printf("a = { ");
	for(int i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("}\n");
	array_copy(a,b,5);
	return 0;
}
