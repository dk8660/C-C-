#include <stdio.h>
#include "fpop.h"
int result;
int plus(int x, int y) {
	result = x + y;
	return result;
}
int minus(int x, int y) {
	result = x - y;
	return result;
}
int mul(int x, int y) {
	result = x * y;
	return result;
}
int dev(int x, int y) {
	result = x / y;
	return result;
}