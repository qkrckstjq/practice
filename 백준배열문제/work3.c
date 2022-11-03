#include <stdio.h>

int main () {
int a = 0;
scanf("%d",&a);
int arr[a];
for(int i=0; i<a; i++) {
	scanf("%d",&arr[i]);
}

for(int i = 0; i<a; i++){
	for(int j = i+1; j<a; j++) {
		if(arr[i]>arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp; 
		}
	}
}
printf("%d %d",arr[0], arr[a-1]);

return 0;
}
