#include <stdio.h>


int main() {
	int count = 4;
	int n=0;
	int ans = 0;
	int a = 0;
	scanf("%d",&a);
	int arr[a];
	for(int i = 0; i < a; i++){
	    scanf("%d",&arr[i]);
	}
	
	
	
	//new_arr는 1000이하의 자연수들중 소수만 모아둔배열
    
    
	int num[1000];
	int new_arr[1000];
	
	new_arr[0] = 2;
	new_arr[1] = 3;
	new_arr[2] = 5;
	new_arr[3] = 7;
	
	for (int i = 10; i <= 1000; i++) {
		num[n] = i;
		if ((num[n] % 2) != 0 && (num[n] % 3) != 0 && (num[n] % 5) != 0 && (num[n] % 7) != 0)  {
			new_arr[count] = num[n];
			count++;
		}
		n++;
	}
	for(int i = count-1 ; i >= 0; i--){
	    for(int j = i-1 ; j >= 0; j--){
	        if(new_arr[i] % new_arr[j] == 0) {
	            new_arr[i] = -1;
	        }
	    }
	}
	
    
    for(int i = 0; i <= count; i++){
	    for(int j = 0; j < a; j++){
	        if(arr[j] == new_arr[i]){
	            ans++;
	        }
	    }
	}
	
	printf("%d",ans);
    
	
}
