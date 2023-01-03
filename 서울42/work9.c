#include <unistd.h>

void ft_strcpy(char *dst, char *src) {
	while(*src != 0) {
		*dst = *src;
		dst++, src++;
	}
}

void put_str(char *arr) {
	while(*arr != 0) {
		write(1,arr,1);
		arr++;
	}
}

int main(void) {
	char arr[] = "H복사될문자ello World!";
	char arr2[100];
	
	char *arrp = arr;
	char *arr2p = arr2;

	ft_strcpy(arr2p, arrp);
	
	put_str(arr2p);

	
}
