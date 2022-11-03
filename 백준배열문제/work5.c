#include <stdio.h>

int main() {
	int class[30] = {0};
	int sub[28];
	
	for(int i = 0; i<sizeof(class); i++) {
		class[i] = i+1;
	}

	for(int i = 0; i<sizeof(sub); i++) {
		scanf("%d",&sub[i]);
	}
	
	for(int i = 0; i<sizeof(class); i++) {
		for(int j = 0; j<sizeof(sub); j++){
			if(class[i] == sub[j]){
				class[i] = 0;
			}
		}
	}
	
	for(int i = 0; i<sizeof(class); i++) {
		if(class[i] != 0){
			printf("%d",class[i]);
		}
	
	}
	
}
