#include <stdio.h>

int main() {
	int a[30] = {0};
	int sub[28];
	
	for(int i = 0; i<sizeof(a)/4; i++) {
		a[i] = i+1;
	}

	for(int i = 0; i<sizeof(sub)/4; i++) {
		scanf("%d",&sub[i]);
	}
	
	for(int i = 0; i<sizeof(a)/4; i++) {
		for(int j = 0; j<sizeof(sub)/4; j++){
			if(a[i] == sub[j]){
				a[i] = 0;
			}
		}
	}
	
	for(int i = 0; i<sizeof(a)/4; i++) {
		if(a[i] != 0){
			printf("%d",a[i]);
		}
	
	}
	
}
