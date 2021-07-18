#include <stdio.h>

int power(int base,int power_raised) {
	
	int tmp = base;
	if(power_raised != 0) {
		for(int i = 1;i<power_raised;i++){
			base = base * tmp;
		}
	}
	else
		base = 1;
	printf("%d^%d=%d\n",tmp,power_raised,base);
}
int main() {
	int base,power_raised;
	printf("밑수: ");
	scanf("%d",&base);
	printf("지수: ");
	scanf("%d",&power_raised);
	power(base,power_raised);
	return 0;
}
