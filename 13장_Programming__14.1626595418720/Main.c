#include <stdio.h>
typedef struct mp3 {
	char song[10];
	char singer[10];
	char loc[20];
	int genre;
	
} MP3;

int main() {
	printf("===================\n");
	printf("\n1.추가\n");
	printf("\n2.출력\n");
	printf("\n3.검색\n");
	printf("\n4.종료\n");
	printf("===================\n");
	int key;
	printf("정수값을 입력하시오: ");
	scanf("%d", &key);
	MP3 m;
	switch(key) {
		case 1:
			printf("제목:");
			scanf("%s", m.song);
			
			printf("가수:");
			scanf("%s", m.singer);
			
			printf("위치:");
			scanf("%s", m.loc);
			
			printf("장르(0: 가요, 1: 팝, 2: 클래식, 3: 영화음악)");
			scanf("%d", &m.genre);
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
	}
	return 0;
}
