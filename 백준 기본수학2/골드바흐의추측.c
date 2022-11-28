#include <stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d", &a);
	int arr[679] = { 0 };

	int diffj[128];
	int diffk[128];



	int num = 0;
	for (int i = 2; i <= 5081; i++) {
		int boolean = 1;
		if (i == 2 || i == 3 || i == 5 || i == 7) {
			arr[num] = i;
			num++;
			boolean *= 0;
		}
		else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
			boolean *= 0;
		}
		else if (i > 120) {
			for (int j = 11; j <= 100; j++) {
				if ((j != i) && (i % j == 0)) {
					boolean *= 0;
					break;
				}
			}
		}
		if (boolean == 1) {
			arr[num] = i;
			num++;
		}
	}
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);

		int c = 0;
		int d = 0;
		for (int j = 0; j < 679; j++) {
			for (int k = 0; k < 679; k++) {
				if (arr[j] + arr[k] == b && arr[j] <= b / 2 && arr[k] >= b / 2) {
					c = j;
					d = k;
				}
			}
		}
		printf("%d %d\n", arr[c], arr[d]);
	}
}
