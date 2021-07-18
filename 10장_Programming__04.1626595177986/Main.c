#include <stdio.h>

int array_copy(int a[], int b[], int size) {
	for(int i=0;i<size;i++) {
		b[i] = a[i];
		printf("%d ",b[i]);
	}
}

int main(void) {
	int size;
	printf("배열의 크기를 입력하시오: ");
	scanf("%d",&size);
	int a[size],b[size];
	for(int i=0;i<size;i++) {
		printf("%d번째 정수를 입력하시오: ",i+1);
		scanf("%d",&a[i]);
	}
	array_copy(a,b,size);
	
	return 0;
}
