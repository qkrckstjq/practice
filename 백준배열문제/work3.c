#include <stdio.h>

int main () {
int a = 0;
scanf("%d",&a);
int arr[a];
for(int i=0; i<a; i++) {
	scanf("%d",&arr[i]);
}
int min = arr[0];
int max = arr[0];
int sample = 0;
for(int i = 0; i<a; i++) {

	if(min > arr[i]){
		min = arr[i]; 
	}
	if(max < arr[i]){
		max = arr[i];
	}
}

printf("%d %d", min, max);

return 0;
}
