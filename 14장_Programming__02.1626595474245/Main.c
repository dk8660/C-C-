#include <stdio.h>

int get_sum(int array[],int size) {
	int i, sum = 0;
	for(i=0;i<size;i++) {
		sum += array[i];
	}
	return sum;
	
}
int main() {
	int array[3][6] = {
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};
	int i,sum = 0;
	for(i=0;i<3;i++) {
		sum += get_sum(array[i],sizeof(array[i])/sizeof(array[i][0]));
	}
	printf("정수의 합=%d\n",sum);
	return 0;
}
