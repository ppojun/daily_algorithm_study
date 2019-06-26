/*
���α׷� ��: sfn
���ѽð�: 1 ��
10 ������ 4 �ڸ� �� �� �̸� 16 ���� , 12 �������� ��Ÿ������ �� ���� ���� 4 �ڸ� ������ ��� ���ϴ� ���̴�.

���� ��� , 10 ���� 2991 �� �� ������ ���� 2+9+9+1 = 21 �̰� , �� ���� 12 �������� ��Ÿ����

2991 = 1*1728 + 8*144 + 9*12 + 3
189312 �̰� , �� �ڸ� ������ ���� 21 �̴�.
�׷��� 2991 �� 16 ������ ��Ÿ���� BAF16 �̰� , �� �ڸ� ������ ���� 11 + 10 + 15 = 36 �̴�. �׷��� 2991 �� ���� �ɼ� ����.

2992 �� 10 , 12 , 16 ������ ��Ÿ������ �� �ڸ����� ���� ���Ƽ� ���� �ǰ� �� ���� 4 �ڸ� �� �� �ּ��� ���̴�.

�Է�
�Է� ���� ����.
���
4 �ڸ� ���� ũ�� ������ �� �ٿ� �ϳ��� ����Ѵ�. ����� ������ ó�� ����� �����ش�.
����� ��
���

2992
2993
2994
2995
2996
2997
2998
2999
...

��ó: Pacific Northwest 2004
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