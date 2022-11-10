#include <stdio.h>



int selfnum () {
int a = 0;
int b = 0;

int size = 10000;

int arr[size];

for(int i = 0; i<size; i++){
        arr[i] = i+1;
}


while(b < size) {
        b = a +
        (a/1000) +
        (a/100) - (a/1000)*10 +
        (a/10) - (a/100)*10 +
        (a%10);
        a++;

        for(int i = 0 ; i < size; i++){
                if(b == arr[i]) {
                        arr[i] = 0;
                }
        }
}

int num = 0;

while(num < size) {
	if(arr[num] != 0) {
		printf("%d",arr[num]);
	}
    	
        num++;
}

	return 0;;

}





int main(void) {
	selfnum();
}
