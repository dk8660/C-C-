#include <stdio.h>
struct account {
	int number;
	char name[10];
	int balance;
};

int main() {
	struct account a1 = { 1, "홍길동", 100000 };
	
	printf("{ %d, %s, %d } \n",a1.number,a1.name,a1.balance);
	return 0;
}
