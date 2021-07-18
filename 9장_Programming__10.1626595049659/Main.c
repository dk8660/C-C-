#include <stdio.h>
int cp (double n, int i) {
	if(i<11)
		cp(n+(1/i),i+1);
	else
		printf("%lf\n",n);
}
int main() {
	int i;
	double n;
	n=0;
	i=1;
	cp(n,i);
	return 0;
}
