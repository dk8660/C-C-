#include <stdio.h>
#define MIN(x,y) (x)<(y)?(x):(y)
#define GET_MIN(x,y,z) (MIN(x,y))<(z)?(MIN(x,y)):(z)
int main() {
	int x,y,z;
	printf("3개의 정수를 입력하세요: ");
	scanf("%d %d %d",&x,&y,&z);
	int result = GET_MIN(x,y,z);
	printf("결과: %d\n",result);
	return 0;
}
