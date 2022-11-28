#include <stdio.h>

int main() {
    int num=0;
    scanf("%d",&num);
    int x=0,y=0;
    
    int bg[101][101] = {0};
    int area = 0;
    
    for(int i = 0; i<num; i++){
        scanf("%d %d",&x,&y);
        for(int j=1; j<=10; j++){
            for(int k=1; k<=10; k++){
                bg[x+j][y+k] = 1;
            }
        }
    }
    for(int i = 0; i<101; i++){
        for(int j=0; j<101; j++){
            if(bg[i][j] == 1){
                area++;
            }
        }

    }
    printf("%d",area);
}