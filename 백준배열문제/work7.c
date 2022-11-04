#include <stdio.h>

int main() {
	
	int a = 0;
	scanf("%d",&a);

	int grade[a];
	
	for(int i = 0; i<a; i++) {
		scanf("%d",&grade[i]);
	}
	int maxgrade = 0;
	float result = 0;

	for(int i = 0; i<a; i++) {
		if(maxgrade < grade[i]) {
			maxgrade = grade[i];
		}
	}


	for(int i = 0 ; i<a; i++) {
		result += ((grade[i] / maxgrade) * 100);
	}

	printf("%f", result/a);
}


