#include <stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);

	if (a == 1) {
		return 0;
	}
	else {
		int num = 2;
		while (a != 1) {
			if (a % num == 0) {
				a = a / num;
				printf("%d\n", num);
				num = 2;
			}
			else {
				num++;
			}
		}

	}
}