#include <stdio.h>
#define SIZE 52
typedef struct card {
	int value;
	char suit;
} CARD;
void initialize (CARD a[], char s[]) {
	int i,j,k;
	k=0;
	for(i=0;i<4;i++) {
		for(j=1;j<=13;j++) {
			a[k].suit = s[i];
			a[k].value = j;
			k++;
		}
	}
}
void print(CARD a[]) {
	for(int i=0;i<SIZE;i++)
		printf("%c:%d ",a[i].suit, a[i].value);
}
int main() {
	CARD all[SIZE];
	char su[4] = {'c','d','h','s'};
	initialize(all,su);
	print(all);
	return 0;
}
