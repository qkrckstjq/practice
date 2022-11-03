#include <stdio.h>

int main() {
	int a[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}

	for(int i = 0; i<10; i++) {
		a[i] = a[i] % 42;
	}
	
	int same[10] = {42};	
	int d = 0;
	int ten = 10;

	for(int i = 0; i<10; i++) {
		for(int j = i+1; j<10; j++) {
			if(a[i] == a[j]) {
				same[d] = a[j];
				d++;
			}
		}
	}
	
	for(int i = 0; i<10; i++) {
		if(same[i] != 42) {
			ten -=1;
		}
	}

	printf("%d",ten);

}
