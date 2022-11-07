#include <stdio.h>
 
 
int main() {
    int a; 
    scanf("%d",&a);
    
    int arr[a][1001];
    float num[a];
    float sum[a];
    float avg[a];
    
    float g[a]; //각 케이스 학생수 
    float h[a]; //각 케이스에서 평균을 넘는 학생수
    
    for(int i = 0; i<a; i++){
        num[i] = 0;
        sum[i] = 0;
        avg[i] = 0;
        g[i] = 0;
        h[i] = 0;
        for(int j = 0; j<1001; j++){
            arr[i][j] = 111;
        }
        
    }
    
    for(int i = 0; i < a; i++){
        int b = 0;
        scanf("%d",&b);
        g[i] = b;
        num[i] = b;
        for(int j = 0; j < b; j++){
            int c = 0;
            scanf("%d",&c);
            arr[i][j] = c;
            sum[i] += c;
        }
    }
    
    for(int i = 0; i < a; i++) {
        avg[i] = sum[i] / num[i];
    }
    
    for(int i = 0; i < a; i++) {
        int q = 0;
        int n = 0;
        float w = 0;
        while(arr[i][n] != 111){
            
            if(avg[i] < arr[i][n]) {
                w += 1;
                h[i] = w;
            }
            n += 1;
        }
    }
    
    for(int i = 0; i < a; i++) {
        printf("%.3f", (h[i] / g[i]) * 100);
        printf("%%");
        printf("\n");
    }
    
    /*int d = 0;
    int e = 0;
    
    while(0 != arr[d][e]) {
        printf("%d ",arr[d][e]);
        e++;
        
        if(0 == arr[d][e]){
            printf("\n");
            d +=1;
            e = 0;
        }
    }*/
}






