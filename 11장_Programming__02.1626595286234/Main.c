#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff) {
	*p_sum = x+y;
	if(x>=y)
		*p_diff = x-y;
	else
		*p_diff = y-x;
}
int main() {
	int x = 100;
	int y = 200;

	get_sum_diff(x,y,&x,&y);
	printf("원소들의 합=%d\n",x);
	printf("원소들의 차=%d\n",y);

	return 0;
}
