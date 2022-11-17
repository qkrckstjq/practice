#include <stdio.h>

int main () {
	int a =0;
	scanf("%d",&a);

	int arr[a];
	char str[a][21];
	
	for(int i = 0; i < a; i++) {
		scanf("%d",&arr[i]);
		scanf("%s", str[i]);
	}

	for(int i = 0; i < a; i++) {
		int len = 0;
		while(str[i][len]) {
			len++;
		}
		
		for(int j = 0; j < len; j++) {
			for(int k = 0; k < arr[i]; k++) {
				printf("%c",str[i][j]);
			}
		
		}
		
		printf("\n");
	}

}
