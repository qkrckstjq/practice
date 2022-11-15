#include <stdio.h>

int main() {
	char a[100];
	scanf("%s",a);
	
	int str_len = 0;
	
	while(a[str_len]) {
		str_len++;
	}
	int c = 0;
	char alphabet[26] = "";
	for(int i = 97; i <= 122; i++) {
		alphabet[c] = i; 
		c++;
	}
	
	int arr[26] = {0};
	
	for(int i = 0; i<26; i++) {
		arr[i] = -1;
	}

	for(int i = 0; i<str_len; i++) {	
		for(int j = 0; j < 26; j++) {
			if(a[i] == alphabet[j]) {
				arr[j] = i;
				alphabet[j] = 0;
			}
		}
	}
	
	for(int i = 0; i<26; i++) {
		printf("%d ",arr[i]);
	}

}
