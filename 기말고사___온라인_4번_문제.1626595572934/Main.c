#include <stdio.h>

struct weather {
	int day;
	char city[20];
	float temp;
}; 

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };

char *days_name[] = { 
"월요일", "화요일", "수요일", "목요일", "금요일", "토요일", "일요일" };

struct weather list[] =  { { MON, "제주도", 36.3 }, 
{ WED, "서울시", 32.6 }, 
{ FRI, "부산시", 34.1 }, 
{ SUN, "광주시", 35.1 }}; 


int main(void)
{

	
	
	printf("[2020년 6월 4주차 주간날씨]\n");
	for(int i =0;i<4;i++) {
		enum days day;
		printf("지역:%s(%s) 기온:%.1f\n", list[i].city, days_name[list[i].day], list[i].temp);
	}
 // 구현해야 할 부분
	
	return 0;
}