#include <stdio.h>

void pr_str_array(char **dp, int n) {
	for(int i=0;i<n;i++) {
		printf("%s\n",dp[i]);
	}
}
int main() {
	char *str_array[9] = {
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blame his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools.",
		"A bad workman always balmes his tools.",
		"A bargain is a bargain.",
		"A barking dog never bites.",
		"A barking dog was never a good hunter."
	};
	pr_str_array(str_array, sizeof(str_array)/sizeof(str_array[0]));
	return 0;
}
