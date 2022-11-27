#include <stdio.h>

int main() {
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		int boolean = 1;
		if (i == 1) {
			boolean *= 0;
		}
		else if (i == 2 || i == 3 || i == 5 || i == 7) {

		}
		else if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
			boolean *= 0;
		}
		else if (i > 120) {
			for (int j = 11; j <= 1000; j++) {
				if (i != j && i % j == 0 && i > j) {
					boolean *= 0;
					break;
				}
			}
		}

		if (boolean == 1) {
			printf("%d\n", i);
		}

	}


}