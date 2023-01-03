#include <unistd.h>

int ft_strlen(char *str) {
	int len = 0;
	
	while(*str != 0) {
		len++;
		str++;
	}
	return len;
} 


int main(int argc, char** argv) {
	char *arrp = argv;	
	
	int len = ft_strlen(arrp);
	int start = 0;
	char new_arr[10];
	
	for(int i = 9; i >=0; i--) {
		new_arr[i] = len%10 + 48;
		len = len/10;
	} 
	for(int i = 0; i < 10; i++) {
		if(new_arr[i] != '0') {
			start = i;
			break;
		}
	}
	
	write(1,&new_arr[start],10-start);
	
	

}
