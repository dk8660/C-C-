#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int a[10] = {0};
	int min,max,i;
	srand( (unsigned)time( NULL ) );
	
	for(i=0;i<10;i++)
		a[i] = rand();
	
	min = a[0];
	for(i=1;i<10;i++) {
		if(a[i]<min)
			min = a[i];
	}
	
	max = a[9];
	for(i=8;i>=0;i--) {
		if(a[i]>max)
			max = a[i];
	}
	
	printf("최대값은 %d\n",max);
	printf("최소값은 %d\n",min);
	return 0;
}
