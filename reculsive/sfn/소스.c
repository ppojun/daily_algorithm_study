/*
프로그램 명: sfn
제한시간: 1 초
10 진수로 4 자리 수 중 이를 16 진법 , 12 진법으로 나타내었을 때 합이 같은 4 자리 정수를 모두 구하는 것이다.

예를 들어 , 10 진수 2991 은 각 숫자의 합은 2+9+9+1 = 21 이고 , 이 수를 12 진법으로 나타내면

2991 = 1*1728 + 8*144 + 9*12 + 3
189312 이고 , 각 자리 숫자의 합은 21 이다.
그런데 2991 을 16 진수로 나타내면 BAF16 이고 , 각 자리 숫자의 합은 11 + 10 + 15 = 36 이다. 그래서 2991 은 답이 될수 없다.

2992 는 10 , 12 , 16 진수로 나타내었을 때 자리수의 합이 같아서 답이 되고 이 수가 4 자리 수 중 최소의 수이다.

입력
입력 값은 없다.
출력
4 자리 수를 크기 순으로 한 줄에 하나씩 출력한다. 입출력 예에서 처음 몇가지를 보여준다.
입출력 예
출력

2992
2993
2994
2995
2996
2997
2998
2999
...

출처: Pacific Northwest 2004
*/
#include<stdio.h>

int arr_10[4];
int arr_12[4];
int arr_16[4];
int k = 0;


void distribute(int n,int distnum,int arr[]){
	if (n == 0) {
		k = 0;
	}
	else {
		arr[k] = n % distnum;
		k++;
		distribute(n / distnum, distnum, arr);
	}
}

int gethap(int arr[]) {
	int hap = 0;
	int i;
	for (i = 0; i < 4; i++) {
		if (arr[i] != '\0') {
			hap = hap + arr[i];
		}
	}
	return hap;
}

void print_arr(int arr[]) {
	int i;
	for (i = 0; i < 4; i++) {
		if (arr[i] != '\0') {
			printf("%d", arr[i]);
		}
	}
	printf("\n");
}

void main() {
	int n = 2991;

	for (n = 1000; n < 9999; n++) {

		int gethap_10 = 0, gethap_12 = 0, gethap_16 = 0;
		distribute(n, 10, arr_10);
		distribute(n, 12, arr_12);
		distribute(n, 16, arr_16);
		//print_arr(arr_10);
		//print_arr(arr_12);
		//print_arr(arr_16);

		gethap_10 = gethap(arr_10);
		gethap_12 = gethap(arr_12);
		gethap_16 = gethap(arr_16);

		//printf("\n\n%d", gethap_10);
		//printf("\n\n%d", gethap_12);
		//printf("\n\n%d", gethap_16);
		if ((gethap_10 == gethap_12) && (gethap_12 == gethap_16)) {
			printf("%d\n", n);
		}
	}
}

/*
#include <stdio.h>

int sum(int i, int j)
{

	if(!i) return i;
	return i%j + sum(i/j,j);
}
int main()
{
	int i;

	for(i=2992; i<10000; i++)
	{
		if(sum(i,10) == sum(i,12) && sum(i,10) == sum(i,16))
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
*/