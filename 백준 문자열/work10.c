#include <stdio.h>


int main () {
	int a =0 ;
	scanf("%d",&a);
	int ans = a;


	char str[a][100];
	for(int i = 0; i < a; i++) {
		scanf("%s",str[i]);
	} 


	for(int i = 0; i < a; i++) {
		int len = 0;
		while(str[i][len]) len++;
		int arr[len];
		for(int j = 0; j < len; j++) {
			arr[j] = 0;
		}	

		for(int j = 0; j <= len; j++) {
			for(int k = j; k <= len; k++) {
				if(str[i][j] == str[i][k]) {
					arr[j] = str[i][k];
				} else if (str[i][j] != str[i][k]){
					arr[j+1] = str[i][k];
					j++;
				}
			}
		}
		int f = 1;
		int newlen = 0;
		while(arr[newlen]) newlen++;
		
		for(int j = 0; j<=newlen; j++) {
			for(int k = j+1; k<=newlen; k++) {
				if(arr[j] == arr[k]) {
					f *= 0;
				}
			}
		}
		
		if(f == 0) {
			ans-=1;
		}		

	}
	
	printf("%d",ans);


	


}
