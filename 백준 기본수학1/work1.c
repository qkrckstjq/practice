#include <stdio.h>


int main () {
	long long a=0;
	long long b=0;
	long long c=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	
	long long B = b;
	long long C = c;	
	long long d = 1;
	while(1) {
		if(c < b) {
			d = -1;
			break;
		}
		B=b*d;
                C=c*d;		
		if(a+B < C) break;
		d+=1;
	}

	printf("%lld",d);



}
