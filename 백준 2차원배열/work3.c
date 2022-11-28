#include <stdio.h>

int main() {
	int arr[9][9];
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int max = 0;
	int maxi=0;
	int maxj=0;

	for(int i =0; i<9; i++){
		for(int j=0; j<9; j++){
			if(arr[0][0] < arr[i][j]){
				arr[0][0] = arr[i][j];
				maxi=i;
				maxj=j;				
			}			

		}
	}
	
	printf("%d\n%d %d",arr[0][0],maxi+1,maxj+1);

}
