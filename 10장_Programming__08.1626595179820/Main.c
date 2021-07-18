#include <stdio.h>
#include <math.h>
int main() {
	int a[10];
	for(int i=0;i<10;i++) {
		printf("데이터를 입력하시오:");
		scanf("%d",&a[i]);
	}
	
	int sum=0;
	for(int j=0;j<10;j++) {
		sum += a[j];
	}
	double aver = sum/10;
	
	double v;
	double tmp=0;
	for(int k=0;k<10;k++) {
		tmp += (a[k]-aver)*(a[k]-aver);
	}
	v = sqrt(tmp/10);
	
	printf("평균값은 %lf\n",aver);
	printf("표준편차값은 %lf\n",v);
	
	return 0;
}
