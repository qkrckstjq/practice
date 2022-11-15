#include <stdio.h>

int stn(char str[]) {
	int arr[sizeof(str)] = {0};
	for (int i = 0; i < sizeof(str); i++) {
		arr[i] = str[i];
		arr[i] = arr[i] - 48;
	}
	int sum = 0;
	for (int i = 0; i < sizeof(str); i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {

}
