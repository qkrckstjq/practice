#include <unistd.h>

int main () {
	int z = 'z';
	int y = 'Y';

	while(1){
		write(1,&z,1);
		write(1,&y,1);

		if(y == 'A') break;
		
		z -=2;
		y -=2;

	}
	write(1,"\n",1);
	return 0;

}
