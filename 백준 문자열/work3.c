#include <stdio.h>

int main() {
	char a[] = "";
	scanf("%s",a);
	
	int str_len = 0;
	
	while(a[str_len]) {
		str_len++;
	}
	int c = 0;
	char alphabet[27] = "";
	for(int i = 97; i <= 122; i++) {
		alphabet[c] = i; 
		c++;
	}
	
	int arr[27] = {0};
	
	for(int i = 0; i<27; i++) {
		arr[i] = -1;
	}

	
	for(int i = 0; i<str_len+1; i++) {	
		for(int j = 0; j < 27; j++) {
			if(a[i] == alphabet[j]) {
				arr[j] = i;
			}
		}
	}
	
	for(int i = 0; i<27; i++) {
		printf("%d ",arr[i]);
	}

}
