#include <stdio.h>

int main() {
	int a = 1;

	while (1) {
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		int count = 0;
		for (int i = a + 1; i <= 2 * a; i++) {
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
				for (int j = 11; j <= 497; j++) {
					if (i != j && i % j == 0 && i > j) {
						boolean *= 0;
						break;
					}
				}
			}
			if (boolean == 1) {
				count += 1;
			}
		}
		printf("%d\n", count);
	}
}