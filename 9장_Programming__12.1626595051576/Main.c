#include <stdio.h>
int fib(int x,int y, int i,int tmp) {
	tmp=x;
	x=y;
	y=tmp+y;
	printf("fib(%d) = %d\n",i,y);
	fib(x,y,i+1,tmp);
}
int main() {
	int x,y,i,tmp;
	x=1;
	y=1;
	i=3;
	printf("fib(0) = 0\n");
	printf("fib(1) = 1\n");
	printf("fib(2) = 1\n");	
	fib(x,y,i,tmp);
	return 0;
}
