#include <stdio.h>

int main() {
	int a=0,b=0,v=0,day=1,result=0;

	scanf("%d %d %d",&a,&b,&v);	

	while(1) {
		result = result + a - b;
		if(result >= v) {
			printf("%d",day);
			break;
		}
		day++;
	}
}
