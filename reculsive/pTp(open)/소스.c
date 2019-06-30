/*
좌우 대칭 산
프로그램 명: pTp(open)
제한시간: 1 초
봉우리가 여러개인 산 모양을 출력한다. 산 모양은 그림과 같고 좌우 대칭이다.
입력
입력은 20 이하의 자연수이다.
출력
출력 예의 형식으로 출력한다.
입출력 예
입력
1
출력
1
입력
2
출력
121
입력
3
출력
1213121
입력
4
출력
121312141213121
입력
5
출력
1213121412131215121312141213121
*/

#include <stdio.h>

void mountain(int n) {
	if (n < 1);
	else {
		mountain(n - 1);
		printf("%d", n);
		mountain(n - 1);
	}
}
void main() {
	int n;
	scanf_s("%d", &n);
	mountain(n);
}