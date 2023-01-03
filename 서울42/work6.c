#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	
	int len = 0;
	int boolean = 1;
	
	
	if(argc == 1) {
		write(1,"a",1);		
	} else  {
		while(argv[1][len] != 0) {
                 len++;
        	}
		for(int i = 0; i < len; i++) {
			if(argv[1][i] == 'a') {
				boolean *= 0;
			} 
		}
		
		if(boolean == 0) {
			write(1,"a",1);
		} else if (boolean == 1) {
			write(1,"\n",1);
		}

	}


}
