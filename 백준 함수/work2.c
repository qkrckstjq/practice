#include <stdio.h>


int number(int a) {
	
int num = a;	

	if(num < 100) {
		printf("%d",num);
	} else if (num >= 100) {
		int c = a;
	for(int i = 100 ; i <= c; i++) {
		int lg = num / 100;
		int md = (num/10)%10;
		int sm = num % 10;
		int sample1 = lg - md;
		int sample2 = md - sm;
		if(sample1 < 0) {
			sample1 = sample1 * -1;
		}
		if(sample2 < 0) {
			sample2 = sample2 * -1;
		}
		
		if(sample1 == sample2) {
			num += 1;	
		}
	
	}
		printf("%d",num);
	}


	return 0;	
}



int main (void) {
	int a =0;
	scanf("%d",&a);

	number(a);

}
