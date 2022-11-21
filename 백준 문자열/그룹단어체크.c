#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int a = 0;
	scanf("%d", &a);

	int ans = a;
	
	
	for (int i = 0; i < a; i++) {
		char word[101] = {0};
		scanf("%s", word);
		char com[101];
		int num = 0;
		for (int j = 0; j < 100; j++) {s
			for (int k = j + 1; k < 100; k++) {
				if (word[j] != NULL) {
					if (word[j] == word[k]) {
						com[num] = word[j];
						j++;
					} else if (word[j] != word[k]) {
						com[num] = word[j];
						num++;
						com[num] = word[k];
						j++;
					}
				}
			}
		}

		int check = 1;

		int newlen = 0;
		while (com[newlen] != NULL) newlen++;

		for (int j = 0; j < newlen; j++) {
			for (int k = j + 1; k < newlen; k++) {
				if (com[j] == com[k]) {
						check *= 0;
				}
				
			}
		}

		if (check == 0) {
			ans -= 1;
		}
	}
	printf("%d", ans);
}
