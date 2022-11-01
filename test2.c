#include<stdio.h>

int main() {
	
int a =0;
scanf("%d", &a);

int arr[a];

for(int i = 0; i<a; i++ ) {
	scanf("%d", &arr[i]);
}

int b = 0;

scanf("%d",&b);
int same = 0;

for(int i=0; i<a; i++) {
	if(arr[i] == b) {
	same += 1;
}
}
printf("%d",same);

return 0;

}
