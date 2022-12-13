#include <stdio.h>

long long selfnum(long long a) {
    if(a%2 == 0) { //a가 짝수면
        return (a+1)*(a/2);
    } else {
        return ((a+1)/2) + (a/2)*(1+a);
    }
}

long long findk(long long a, long long b){
    //a == k-1, b == range
    int diff = b - selfnum(a);
    if(diff >= a-1) {
        if(selfnum(a)+(a-1) == b){
            count++;
        } else if (selfnum(a)+(a) == b) {
            count++;
        } else if (selfnum(a)+(a+1) == b) {
            count++;
        }
    } else if (diff < a-1) {
        
    }
}


int main(void) {
    int T = 0; //테스트 케이스
    scanf("%d",&T);
    long long x = 0, y = 0;
    
    for(int i = 0 ; i < T ; i++){
        scanf("%lld %lld\n",&x,&y);
        long long range = y-x;
        int count = 0;
        if(range <= 3) {
            printf("%lld",range);
        } else if (range > 3) {
            range-=1; //셀프넘버를사용해서 range-1을 만들어야함 
            for(long long k = 1; k <= 65536; k++) {
                if(selfnum(k) == range){
                    printf("%lld\n",k+1);
                    break;
                } else if (selfnum(k) > range) { //k가 range를 초과했음 
                    count = k-1;
                    printf("%lld\n", findk(k-1, range))
                }
            }
        }
        
        
    }
    
}