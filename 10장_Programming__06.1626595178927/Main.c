#include <stdio.h>
int main() {
	int a[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	
int ver, hor, ver_sum, hor_sum;
 
	for(hor=0; hor<3; hor++) {
		hor_sum = 0;
		for(ver=0; ver<5; ver++)
			hor_sum += a[hor][ver];
		printf("%d행의 합계는 %d\n", hor+1, hor_sum);
	}

	for(ver=0; ver<5; ver++) {
		ver_sum = 0;
		for(hor=0; hor<3; hor++)
			ver_sum += a[hor][ver];
		printf("%d열의 합계는 %d\n", ver+1, ver_sum);
	}
	
	return 0;
}
