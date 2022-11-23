#include <stdio.h>


int main () {
	int a = 3;
	int b = 5;

	int c = 0;
	scanf("%d",&c);	
	int x = 0; // x < c / x
	int y = 0; // y < c / y

	int t = c/3;
	int arr[t];
	for(int i = 0 ; i<t; i++) {
		arr[i] = 0;
	}
	int ans = 0;	

	if(c == 1 || c == 2 || c == 4 || c == 7) {
		printf("%d",-1);
	} else {
		int k = 0;	
		for(int j = 0; j<=c/a; j++) {
			if(((c - 3*x) % 5) == 0) {
				arr[k] = x + (c-3*x)/5;
				x++;
				k++;
			} else {
				x++;
			}
						
		}
	for(int i = 0; i<t; i++) {
		if(arr[i]!=0 && arr[0] > arr[i]) {
			arr[0] = arr[i];
		}
	}
	printf("%d",arr[0]);
	}




}
