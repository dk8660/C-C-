#include <stdio.h>
#include <string.h>

void sort_years(char *years[], int size);

int main(void)
{
	int i;
	char *year[] = {"2020", "2017", "2021", "2018", "2016", "2022", "2017"};
	printf("[정렬 전]\n");
	for(i=0;i<7;i++) {
		printf("%d %s\n",&year[i],year[i]);
	}
	
// 구현해야 할 부분
	sort_years(year,7);
	for(i=0;i<7;i++) {
		printf("%s\n",year[i]);
	}
	return 0;
}

void sort_years(char *years[], int size) {
// 구현해야 할 부분
	int i,j,least;
	char *temp;
	
	for(i=0;i<size-1;i++) {
		least = i;
		for(j=i+1;j<size;j++)
			if(years[j] < years[least])
				least = j;
		temp = years[i];
		years[i] = years[least];
		years[least] = temp;
	}
}