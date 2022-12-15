#include <stdio.h>


int main() {
    int M = 0;
    int N = 0;
    scanf("%d %d", &N, &M);
    char board[N+1][M+1];
    
    for(int i = 0 ; i < N; i++){
        scanf("%s", board[i]);
    }
    
    char case1[9][9] = {"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"}; //BW로 시작
    char case2[9][9] = {"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"}; //WB로 시작
    //case1은 BW로 시작, case2는 WB로 시작
    //M은 가로, N은 세로
    
    int case1_count = 0;
    int case2_count = 0;
    
    int best = 0;
    
    int a = 0; //세로 줄 추가
    int b = 0; //가로 줄 추가
    int c = 0;
    
    while(1) {
        while(1) {
            case1_count = 0;
            case2_count = 0;
            
            int x = 0;
            int y = 0;
            
            for(int i = a; i < a+8; i++){
                y = 0;
                for(int j = b; j < b+8; j++){
                    
                    if(case1[x][y] == board[i][j]) {
                        case1_count++;
                    }
                    if(case2[x][y] == board[i][j]) {
                        case2_count++;
                    }
                    y++;
                }
                x++;
            }
            
            if(best <= case1_count){
                best = case1_count;
            }
            if(best <= case2_count){
                best = case2_count;
            }
        
            
            if(b+8 == M){
                b=0;
                break;
            }
            b++;
            
        }
        
        if(a+8 == N){
            break;
        }
        a++;
    }
    
    
    printf("%d",64-best);
	
}
