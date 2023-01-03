#include <unistd.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
	
	if(argc == 1) {
		write(1,"\n",1);
	} else {
		int len = 0;
		while(argv[1][len] != 0) len++;
		
		if(len == 0) write(1,"\n",1);
		else {
		for(int i = 0; i < len; i++) {
			int repeat = 1;
			for(int j = 65; j <=90; j++) {
				if(argv[1][i] == j) {
				repeat += j-65;	
				break;
				}
				if(argv[1][i] == j+32) {
				repeat += j-65;
				break;
				}
			}

			for(int j = 0; j < repeat; j++) {
				write(1,&argv[1][i],1);
			}
		}
		}
	}		

}


