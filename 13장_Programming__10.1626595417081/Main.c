#include <stdio.h>
typedef struct employee {
	int number;
	char name[10];
	int age;
	char phone[10];
	
} EP;

int main() {
	EP e[10] = {
		{1, "홍길동1", 20, "111-1111"},
		{2, "홍길동2", 25, "111-1112"},
		{3, "홍길동3", 60, "111-1113"},
		{4, "홍길동4", 40, "111-1114"},
		{5, "홍길동5", 50, "111-1115"},
		{6, "홍길동6", 45, "111-1116"},
		{7, "홍길동7", 32, "111-1117"},
		{8, "홍길동8", 23, "111-1118"},
		{9, "홍길동9", 29, "111-1119"},
		{10, "홍길동10", 62, "111-1120"}
	};
	for(int j=0;j<10;j++)
		printf("%d, %s, %d, %s \n",e[j].number,e[j].name,e[j].age,e[j].phone);
	for(int i=0;i<10;i++) {
		if(e[i].age >= 20 && e[i].age <= 30)
			printf("이름=%s 나이=%d \n",e[i].name,e[i].age);
	}

	return 0;
}
