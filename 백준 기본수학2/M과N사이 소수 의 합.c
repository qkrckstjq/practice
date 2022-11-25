#include <stdio.h>


int main() {
	int count = 4;
	int n = 0;
	int M = 0;
	int N = 0;
	scanf("%d %d", &M, &N);
	int sum = 0;
	int min = 0;
	int max = 0;
	//new_arr는 1000이하의 자연수들중 소수만 모아둔배열


	int num[10000];
	int new_arr[10000];

	new_arr[0] = 2;
	new_arr[1] = 3;
	new_arr[2] = 5;
	new_arr[3] = 7;

	for (int i = 10; i <= 10000; i++) {
		num[n] = i;
		if ((num[n] % 2) != 0 && (num[n] % 3) != 0 && (num[n] % 5) != 0 && (num[n] % 7) != 0) {
			new_arr[count] = num[n];
			count++;
		}
		n++;
	}
	for (int i = count - 1; i >= 0; i--) {
		for (int j = i - 1; j >= 0; j--) {
			if (new_arr[i] % new_arr[j] == 0) {
				new_arr[i] = -1;
			}
		}
	}

	for (int i = 0; i < count; i++) {
		if (new_arr[i] >= M && new_arr[i] <= N) {
			sum += new_arr[i];
		}

	}
	for (int i = 0; i < count; i++) {
		if (new_arr[i] >= M && new_arr[i] <= N) {
			min = new_arr[i];
			break;
		}

	}
	if (min == 0) {
		printf("%d", -1);
	}
	else {
		printf("%d\n%d", sum, min);
	}



}
