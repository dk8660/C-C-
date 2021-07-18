#include <stdio.h>
int get_gcd(int x, int y) {
	if(y == 0)
		return x;
	return get_gcd(y,x%y);
	
}
void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd) {
	*p_gcd = get_gcd(x,y);
	*p_lcm = (x*y) / *p_gcd;
	printf("최소공배수는 %d입니다.\n",*p_lcm);
	printf("최대공약수는 %d입니다.\n",*p_gcd);
	
}
int main() {
	int a,b;
	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d",&a,&b);
	get_lcm_gcd(a,b,&a,&b);
	
	
	return 0;
}
