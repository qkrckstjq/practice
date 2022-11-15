#include <stdio.h>

int stn(char str[]) {
	int str_len = 0;
	while (str[str_len]) {
		str_len++;
	}


	int arr[100] = {0};
	for (int i = 0; i < str_len; i++) {
		arr[i] = str[i];
		arr[i] = arr[i] - 48;
	}
	int sum = 0;
	for (int i = 0; i < str_len; i++) {
		sum += arr[i];
	}

	printf("%d", sum);
	return 0;
}

int main() {
	int a = 0;
	scanf("%d", &a);
	char b[a];
	scanf("%s", b);
	stn(b);
}
