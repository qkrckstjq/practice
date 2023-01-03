#include <unistd.h>

int main(int argc, char* argv[]) {
	
	if(argc == 1) {
		write(1,"\n",1);
	} else {
		int len = 0;
		while(argv[argc-1][len] != 0) len++;
	
		for(int i = 0 ; i < len ; i++) {
			write(1,&argv[argc-1][i],1);
		}
		
	}	

}
