#include <stdio.h>


int compare(char a[], char b[]) {
	int a_size = 0;
	int b_size = 0;
	int boolean = 1;

	while (a[a_size] != 0) a_size++;
	while (b[b_size] != 0) b_size++;

	if (a_size != b_size) {
		return 0;
	}
	else if (a_size == b_size) {
		for (int i = 0; i < a_size; i++) {
			if (a[i] == b[i]) {
				boolean *= 1;
			}
			else if (a[i] != b[i]) {
				boolean *= 0;
				break;
			}
		}

		if (boolean == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int main(void) {
	int T = 0; //test case;
	char words[10];
	int b = 0;
	int start = 0;
	int stack[10000] = {0};

	scanf("%d", &T);

	char push[] = "push";
	char pop[] = "pop";
	char size[] = "size";
	char empty[] = "empty";
	char top[] = "top";



	for (int i = 0; i < T; i++) {
		scanf("%s", words);

		if (compare(words,push) == 1) {
			scanf("%d", &b);
			stack[start] = b;
			start++;
		}
		else if (compare(words, pop) == 1) {
			if (stack[start - 1] == 0 || (start-1) < 0) {
				printf("%d\n", -1);
			} else {
				printf("%d\n", stack[start - 1]);
				stack[start - 1] = 0;
				start--;
			}
		}
		else if (compare(words, size) == 1) {
			printf("%d\n", start);
		}
		else if (compare(words, empty) == 1) {
			if (stack[0] == 0) {
				printf("%d\n", 1);
			}
			else {
				printf("%d\n", 0);
			}
		}
		else if (compare(words, top) == 1) {
			if (stack[start - 1] == 0 || (start - 1) < 0) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", stack[start - 1]);
			}

			
		}

	}

}