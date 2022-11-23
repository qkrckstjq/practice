#include <stdio.h>

int main () {
	int a = 0;
	scanf("%d",&a);

	int k=0, N=0;	

	for(int i = 0; i<a; i++) {
		scanf("%d %d",&k, &N);
		int r = k+1;
		int n = k+N;
		int q = n-r;
		for(int j = n-r-1; j>0; j--) {
                        q *= j;
                }
		for(int j = n-1; j>0; j--) {
			n *= j;
		} 
		for(int j = r-1; j>0; j--) {
			r *= j;	
		}
	
		printf("%d\n",(n)/(r*q));

	}
	
	
}
