#include <stdio.h>


int pow(int x, int y) {
	if (y == 1)
		return x;
	return x * pow(x, y - 1);
}

int main() {
	int x, y, result;
	scanf_s("%d %d", &x, &y);
	result = pow(x, y);
	printf("%d", result);
}