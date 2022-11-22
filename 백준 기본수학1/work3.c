#include <stdio.h>


int main () {
	int a = 0;
	scanf("%d",&a);

	int start = 1;
	int x = 1;
	int y = 1;
	int up = 1;
	int vari = 1;
	while(1) {		
		
		if( (up-(vari-1)) <=a && a<= up) {
			if(start%2 != 0) { //start 가 홀수면
				y = start;
				x = 1;
				for(int i = 0; i<up-a; i++) {
					x++;
					y--;
				}
				printf("%d/%d",x,y);
				break;
			} else if(start%2 == 0) { //start가 짝수면
				y = 1;
				x = start;
				for(int i = 0; i<up-a; i++) {
					x--;
					y++;
				}
				printf("%d/%d",x,y);
				break;
			}

		}
		vari++;
		up=up+vari;
		start++;	
	

	}


}
