#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUM 100

int main() {
	srand( (unsigned)time( NULL ) );
	int count[6] = {0};
	int sum = 0;
	double avr = 0;
	for(int i =0;i<NUM;i++) {
		int num = (rand()%6) + 1;
		switch(num) {
			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			case 6:
				count[5]++;
				break;
		}
	}
	for(int i=0;i<6;i++) {
		printf("%d면 -> %d\n",i+1,count[i]);
		sum += i*count[i];
	}
	printf("전체 면의 합은 %d\n",sum);
	avr = sum/100.0;
	printf("면의 평균값은 %.1lf\n",avr);
	return 0;
}
