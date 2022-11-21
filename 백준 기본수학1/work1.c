#include <stdio.h>


int main () {
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d %d",&a,&b,&c);
	
	int C = 0;
	int D = 0;	
	int d = 1;
	while((a+D) > C) {
		if(c < b) {
			d = -1;
			break;
		}
		C=c*d;
		D=b*d;
		d++;
	}

	printf("%d",d);



}
