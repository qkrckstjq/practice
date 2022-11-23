#include <stdio.h>

int main() {
	int a = 0;
	scanf("%d", &a);

	int k = 0, f = 0;

	for (int i = 0; i < a; i++) {
		

		scanf("%d %d", &k, &f);
		long long r = k + 1;
		long long n = k + f;
		long long q = n - r;
		if (n - r == 0) {
			q = 1;
		} else {
			for (int j = n - r - 1; j > 0; j--) {
				q *= j;
			}
		}
		if (n == r) {
			n = 1;
			r = 1;
		} else {
			for (int j = n - 1; j > r; j--) {
				n *= j;
			}
		}
		printf("%d\n", (n) / (q));
	}
}