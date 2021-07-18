#include <stdio.h>

void get_sum_average(int a[][5], int i, float *p_sum, float *p_average);

int main(void)
{
	int x;
	float sum, average;
	int data[][5] = { { 62, 56, 41, 74, 89 },
			{ 59, 75, 43, 14, 93 },
			{ 50, 83, 78, 38, 91 } };
	
	for(x=0; x<3; x++){
		sum = 0;
		get_sum_average(data,x,&sum,&average);
		// 구현해야 할 부분 - 인수를 지정
		printf("%d행의 합계: %.f, 평균: %.1f\n",x,sum,average);
	}

	return 0;
}
void get_sum_average(int a[][5], int i, float *p_sum, float *p_average)
{
	for(int j=0;j<5;j++) {
		*p_sum += a[i][j];
	}
	*p_average = *p_sum/5.0;
	// 구현해야 할 부분 - 합계와 평균을 구하는 코드
	// int i는  2차원 배열의 행을 가리킴
}

