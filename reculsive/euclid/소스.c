#include <stdio.h>

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}

int lcm(int x, int y, int gcd) {
	int result;
	result = x * y / gcd;
	return result;
}

int main(){
	int x, y, result, result2;
	scanf_s("%d %d", &x, &y);
	if (1 > x) {
		exit(1);
	}
	if (y > 100000) {
		exit(1);
	}
	result = gcd(x, y);
	result2 = lcm(x, y, result);
	printf("%d %d", result, result2);
}