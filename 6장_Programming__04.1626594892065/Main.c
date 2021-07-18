#include <stdio.h>
int main(void)
{
	int computer = rand()%3+1;      // 난수를 발생하는 rand() 함수
	int user;
	printf("선택하시오(1: 가위 2:바위  3:보)");
	
	// 여기에 코드를 작성하시오
	scanf("%d",&user);
	
	if (user - computer == 0)
		printf("비겼음");
	if (user - computer == 1 || user - computer == -2)
		printf("유저가 이겼음");
	if (user - computer == 2 || user - computer == -1)
		printf("컴퓨터가 이겼음");
	
	printf("computer = %d, user = %d",computer,user);
	
	return 0;
}
