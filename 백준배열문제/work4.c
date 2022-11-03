#include <stdio.h>

int main() {
	int arr[9]={0};
	
	for(int i = 0; i<9; i++) {
		scanf("%d",&arr[i]);
	}
	
	int max = arr[0];
	int maxnum = 1;

	for(int i = 0; i<9; i++) {
		if(max < arr[i]){
			max = arr[i];
		}
	}
		
	for(int i = 0; i<9; i++) {
		if(arr[i] == max){
			maxnum = i+1;
		}
	}

	printf("%d\n%d",max,maxnum);
}
