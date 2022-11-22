#include <stdio.h>

int main () {
	int a = 0;
	scanf("%d",&a);

	int arr[a];

	int H=0,W=0,N=0;

	int result = 0;

	for(int i = 0; i <a; i++) {
		scanf("%d %d %d",&H, &W, &N);
		
		int start = 1;
		for(int x = 1; x <= W; x++) {
			for(int y = 1; y <= H; y++) {
				if(start == N) {
					arr[i] = y*100 + x;
				}
				start++;
			}
		}
		printf("%d\n",arr[i]);
	}

	



}
