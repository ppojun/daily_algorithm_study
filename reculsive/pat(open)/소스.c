/*
비트패턴
프로그램 명: pat(open)
제한시간: 1 초
두 정수 n , k 를 입력으로 받아 k 개의 1 을 가진 n 자리 이진 패턴을 출력하는 프로그램을 작성 하세요.
입력
두 정수 n , k 가 입력으로 주어진다. (0 < n <= 30 , 0 <= k < 8 , n >= k)
출력
결과를 내림차순으로 출력한다.
입출력 예
입력
2 1
출력
10
01

입력
2 0
출력
00

입력
4 2
출력
1100
1010
1001
0110
0101
0011
*/
//arr[0]부터 시작하여 1일 경우 0일경우로 나눠 재귀 && 멈추는 조건은 소모한 k가 목표 k의 개수가 같을 경우
#include <stdio.h>

int arr[31];
int length;
int n, k;
int i;

void bitpattern(int now_n, int now_k) {
	if (now_k==k) {
		for (i = 0; i < length; i++) {
			printf("%d", arr[i]);
		}
		printf("\n");
		return;
	}
	if (now_n == n) {
		return;
	}
	arr[now_n] = 1; 
	bitpattern(now_n + 1, now_k + 1);
	arr[now_n] = 0;
	bitpattern(now_n + 1, now_k);
}

void main() {
	
	scanf_s("%d %d", &n, &k);
	length = n;
	bitpattern(0, 0);
}