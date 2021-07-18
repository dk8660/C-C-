#include <stdio.h>
void sort_string(char *s[],int size) {
	int i,j;
	char *tmp = NULL;
	for(i=0;i<3;i++) {
		for(j=i+1;j<3;j++) {
			if(*s[i] > *s[j]) {
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
}

int main() {
	char *str[3] = {
		"mycopy",
		"src",
		"dst"
	};
	sort_string(str,sizeof(str)/sizeof(str[0]));
	for(int i=0;i<3;i++)
		printf("%s\n",str[i]);
	return 0;
}
