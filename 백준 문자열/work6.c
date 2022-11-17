#include <stdio.h>

# pragma warning(disable:4996)

int main() {
	char arr[1000000];

	scanf("%[^\n]s", arr);

	int len = 0;
	int space = 0;
	while (arr[len]) {
		if (arr[len] == 32) {
			space++;
		}
		len++;
	}
	

	int num[len+1];
	for (int i = 0; i < len; i++) {
		num[i] = 1;
		if (arr[i] == 32) {
			num[i] = 0;
		}
	}
	int word = 0;

	for (int i = 0; i < len; i++) {
		if (num[i] == 1) {
			if (num[i + 1] != 1) {
				word++;
			}
		}
	}


	printf("%d", word);
}