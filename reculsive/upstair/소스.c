/*
프로그램 명 : upstair
제한시간 : 1 초
	최대 2 칸 까지 오를 수 있을 때 오르는 방법의 가짓수를 출력 하는 문제이다.
	[그림]
	그림은 n 이 4 인 경우의 예 이다.
	1 - 2 - 3 - 4
	1 - 2 - 4
	1 - 3 - 4
	2 - 3 - 4
	2 - 4
	입력
	n 은 30 이하의 양의 정수이다.
	출력
	오를 수 있는 가짓 수를 출력한다.
	입출력 예
	입력
	4
	출력
	5
*/
//해결법 : 낮은 계단까지 오르는 경우의 수의 합이다.
//각 계단을 마지막 계단으로 보기!
#include <stdio.h>

int count = 0;

void climbup(int n) {
	if (n == 0) {
		count++;
	}
	else if (n > 0) {
		climbup(n - 1);
		climbup(n - 2);
	}
}

int main() {
	int n;

	scanf_s("%d", &n);

	climbup(n);

	printf("%d", count);
}