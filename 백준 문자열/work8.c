#include <stdio.h>


int main () {
	
	char a[]="";
	scanf("%s",a);

	int len = 0;
	while(a[len]) len++;

	int ans = 0;

	for(int i = 0; i<len; i++) {
		if(a[i] <= 67){
			ans+=3;
		}else if(a[i] <= 70) {
			ans+=4;
		}else if(a[i] <= 73) {
			ans+=5;
		}else if(a[i] <= 76) {
			ans+=6;
		}else if(a[i] <= 79) {
			ans+=7;
		}else if(a[i] <= 83) {
			ans+=8;
		}else if(a[i] <= 86) {
			ans+=9;
		}else if(a[i] <= 90) {
			ans+=10;
		}
	}

	printf("%d",ans);


}
