#include <stdio.h>


int main() {
	long long a = 0;
	int b = 6;
	long long c = 1;
	
	long long d = 0;
	scanf("%lld",&d);
	
	while(1) {
		c+=(a*b);
		if( (c-((a*b)-1)) <= d && d <= c) {
			break;
		}
		a++;
	}

	printf("%lld",a+1);
}
