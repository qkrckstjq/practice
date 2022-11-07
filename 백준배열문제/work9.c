#include <stdio.h>


int main() {
	int a = 0;
	scanf("%d",&a);
	
	int b;
	int c;

	int arr[a][b][c];
	
	for(int i = 0 ; i < a; i++) {
		scanf("%d",&b);	
		for(int j =0; j<b; j++) {
			scanf("%d",&c);
		}
	}

	float avg[a];

	for(int i = 0 ; i < a; i++) {

		int num = 0;
		for(int j = 0; j<b; j++) {
			for(int k = 0 ; k < c; k++) {
				avg[i] += arr[i][j][k];
			}
		num = j;
		}
		
	avg[i] = avg[i] / num;
	}

	
	for(int i = 0; i<a; i++) {
		
		printf("%f.3", avg[i]);
	}

}
