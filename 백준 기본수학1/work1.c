#include <stdio.h>


int main () {
	long long a=0;
	long long b=0;
	long long c=0;
	scanf("%lld %lld %lld",&a,&b,&c);
	
	long long d = 0;
	
	if(c<=b) {
		d = -1;	
	} else {
		d = (a/(c-b)) + 1;
	}	



	printf("%lld",d);



}
