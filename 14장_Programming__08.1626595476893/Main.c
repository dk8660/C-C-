#include <stdio.h>
#define HEIGHT 3
#define WIDTH 3
void array_copy(int src[][WIDTH], int dst[][WIDTH]) {
	int i,j;
	printf("<원본 2차원 배열>\n");
	for(i=0;i<HEIGHT;i++) {
		for(j=0;j<WIDTH;j++) {
			printf("%d ",src[i][j]);
		}
		printf("\n");
	}
	printf("<복사본 2차원 배열>\n");
	for(i=0;i<HEIGHT;i++) {
		for(j=0;j<WIDTH;j++) {
			dst[i][j] = src[i][j];
			printf("%d ",dst[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int score[HEIGHT][WIDTH] = {
		{100,30,67},
		{89,50,12},
		{19,60,90}
	};
	int cscore[HEIGHT][WIDTH];
	array_copy(score,cscore);
	return 0;
}
