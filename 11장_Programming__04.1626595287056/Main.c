#include <stdio.h>
#define SIZE 5
void array_print(int* A,int size) {
	printf("A[]={ ");
	
	for(int i=0;i<size;i++) {
		printf("%d ", A[i]);
	}
	printf("}\n");
}
int main() {
	
	int a[SIZE] = {1, 2, 3, 4, 5};
	array_print(a,SIZE);
	return 0;
}
