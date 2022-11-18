#include <stdio.h>

int main() {
	char arr[9][5] = {"c=","c-","dz=","d-","lj","nj","s=","z="};

	char a[100];

	scanf("%s",a);

	int len=0;
	while(a[len]) len++;

	int ans = 0;	

	for(int i = 0; i<len; i++) {
		for(int j = 0; j < 9; j++) {
			if(a[i] == arr[j][0]) {
				int size = 0;
				while(arr[j][size]) size++;
				int c = i;
				for(int k = 1; k<size; k++) {
					if(a[i+1] == arr[j][k]) {
						i += 1; 
					}else {
						i = c;
					}	
				}
				
			}
		}				
		ans +=1;
	}
	
	printf("%d",ans);

}
