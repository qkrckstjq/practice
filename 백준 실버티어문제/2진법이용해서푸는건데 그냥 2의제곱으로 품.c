#include <stdio.h>


int main() {
    int N,K;
    scanf("%d %d", &N, &K);
    if (N <= K) {
        printf("%d",0);
    } else {
        int x = 0;
        int size = 0;
        int stand = 0;
        for(int i = 0; i <= 24; i++){
            if(x==0) x=1;
            else if(x!=0) x*=2;
            
            if(x >= N){
                size++;
                int num = 0;
                
                if(x==1){
                    N=N-1;
                    num = x;
                   // printf("%d ",num);
                } else if(x>N) {
                    N = N-(x/2);
                    num = x/2;
                    //printf("%d ",num);
                } else if (x==N){
                    N = N - x;
                    num = x;
                    //printf("%d ",num);
                }
                
                if(size == K){
                    stand = num;
                }
                if(size > K) {
                    stand -= num;   
                }
                if(N==0){
                    break;
                }
                x=0;
                i=0;
            }
        }
        if(size <= K){
            printf("%d",0);
        } else {
            printf("%d",stand);
        }
        
        
    }
    
}