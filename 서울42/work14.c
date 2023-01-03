#include <unistd.h>

int main(int argc, char *argv[]) {
	if(argc != 4) {
		write(1,"\n",1);
	} else {
		int a_len = 0;
		int b_len = 0;
		int c_len = 0;
		while(argv[1][a_len] != 0) a_len++;
		while(argv[2][b_len] != 0) b_len++;
		while(argv[3][c_len] != 0) c_len++;
		//a=첫번째문자열, b=두번째문자열, c=세번째문자열
		int q = 0;
		int boolean = 1;	
		for(int i = 0; i < a_len; i++) {
                        boolean = 1; 
                        for(int j = 0; j < b_len; j++) {
                                if(argv[1][i+j] != argv[2][j]) {
                                        boolean *= 0;
                                }
                        }
			q+=boolean; 
                }
		
		if(q == 0) {
			write(1,"\n",1);
		} else {
				

		for(int i = 0; i < a_len; i++) {
			boolean = 1;
			for(int j = 0; j < b_len; j++) {
				if(argv[1][i+j] != argv[2][j]) {
					boolean *= 0;
				}
			}
			if(boolean == 1) {
				for(int j = 0; j < c_len; j++) {
					write(1,&argv[3][j],1);
				}
			} else if (boolean == 0) {
				write(1,&argv[1][i],1);
			}
			
		}
		
		}
	}

}
