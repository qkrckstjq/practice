#include <unistd.h>

int main(void) {
	char a = 'a';
	char b = 'B';

	while(b <= 'Z') {
		write(1,&a,1);
		write(1,&b,1);
			

		a+=2;
		b+=2;

	}


	write(1,"\n",1);
	return 0;
}

