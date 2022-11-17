#include <stdio.h>

int main () {
	char str[1000000];
	scanf("%s",str);

	char smalpha[26];
	char lgalpha[26];
	
	for(int i = 97; i<=122; i++) {
		smalpha[i-97] = i;
		lgalpha[i-97] = i-32;
	
	}
	
	int len = 0;
	while(str[len]) {
		len++;
	}
	
	int num[26] ={0};

	for(int i = 0; i<len+1; i++) {
		for(int j = 0; j<26; j++) {
			if(str[i] == smalpha[j]) {
				num[j] +=1;
			}
			if(str[i] == lgalpha[j]) {
				num[j] +=1;
			}
			
		}
	}

	for(int i = 0; i < 26; i++) {
		if(num[0] < num[i]) {
			num[0] = num[i];
		}
	}

	for(int i = 0; i< 26; i++) {
		if(num[0] == num[i]) {
			printf("?");
			break;
		}
	}


	
}
