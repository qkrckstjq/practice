#include <unistd.h>

void ft_print_numbers(void) {
	int a = 0;
	
	while(1){
		write(1,a,1);
		a++;
	}

}

int main() {
	ft_print_numbers();
}
