#include <stdio.h>
int main() {
	int hour,age;
	printf("현재 시간(0~23)과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d",&hour,&age);
	
	if (hour < 17) {
		if (age >= 3 && age <= 12 || age >= 65)
			printf("요금은 25000입니다.\n");
	  if (age < 3)
			printf("나이가 너무 어려 입장이 불가능합니다.\n");
	  else
			printf("요금은 34000입니다.\n");
	}
	if (hour >= 17) 
		if (age < 3)
			printf("나이가 너무 어려 입장이 불가능합니다.\n");
		else
			printf("요금은 10000입니다.\n");
		
	return 0;
}
