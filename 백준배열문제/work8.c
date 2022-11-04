#include <stdio.h>


int main() {

	int a = 0;;
	scanf("%d",&a);

	char arr[a][80];
	
	for(int i = 0; i<a; i++) {
		scanf("%s",arr[i]);
	}

	int result[a];

	for(int i = 0 ; i<a; i++) {
		int num = 0;
		int start = 0;
		for(int j = 0; j<80; j++){
			if(arr[i][j] == 79) {
				start += 1;
				num += start;								
			} else if (arr[i][j] == 88) {
				num = 0;
				start = 0;
			}
			result[i] = num;
		}
	}
	
	for(int i = 0 ;i<a; i++) {
		printf("%d\n",result[i]);
	}
	

}

