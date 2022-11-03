#include <stdio.h>

int main() {
	int a[30] = {0};
	int sub[28];
	
	for(int i = 0; i<sizeof(a); i++) {
		a[i] = i+1;
	}

	for(int i = 0; i<sizeof(sub); i++) {
		scanf("%d",&sub[i]);
	}
	
	for(int i = 0; i<sizeof(a); i++) {
		for(int j = 0; j<sizeof(sub); j++){
			if(a[i] == sub[j]){
				a[i] = 0;
			}
		}
	}
	
	for(int i = 0; i<sizeof(a); i++) {
		if(a[i] != 0){
			printf("%d",a[i]);
		}
	
	}
	
}
