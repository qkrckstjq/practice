#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	
	if(argc == 1) {
		write(1,"\n",1);
	} else {
		int len = 0;
		while(argv[1][len] != 0) len++;
		if(len == 0) {
			write(1,"\n",1);
		} else {
			for(int i = 0; i < len; i++) {
			
				char a = 0;

				if(argv[1][i]>=97 && argv[1][i]<=109) {
					a = argv[1][i] + 13;
					write(1, &a ,1);
				} else if (argv[1][i]>=110 && argv[1][i]<=122) {
					a = 97 + 12 - (122 - argv[1][i]);
					write(1,&a,1);
				} else if (argv[1][i] >= 65 && argv[1][i] <=77) {
					a = 13+argv[1][i];
					write(1,&a, 1);	
				} else if (argv[1][i] >= 78 && argv[1][i] <= 90) {
					a = 65 + 12 - (90 - argv[1][i]);
					write(1,&a,1);
				} else {
					write(1,&argv[1][i],1);
				}
		
			}
		}
		
	}

}
