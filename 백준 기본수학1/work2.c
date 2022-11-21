#include <stdio.h>


int main() {
	long long a = 0;
	int b = 6;
	long long c = 1;
	
	long long d = 0;
	scanf("%lld",&d);


	
	while(1) {
		if(d == 1) {
			printf("%lld",d);
			break;
		}

		c+=(a*b);
		if( (c-((a*b)-1)) <= d && d <= c) {
			printf("%lld",a+1);
			break;
		}
		a++;
	}



	

}
