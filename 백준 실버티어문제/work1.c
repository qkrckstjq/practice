#include <stdio.h>

int main () {
	int T = 0; //테스트케이스
	int N = 0; //건물의 개수 //각 건물의 건설시간
	int K = 0; //건물건설 규칙개수
	int W = 0; //원하는 번째의 건물

	scanf("%d",&T);
	
	for(int i = 0; i<T; i++){
		scanf("%d %d",&N, &K);
		int arrX[K];
		int arrY[K];
		int arrN[N];
		int ans = 0;
		for(int j = 0; j<N; j++){
			scanf("%d",&arrN[j]); //건물별 건설시간
		}	
		for(int j = 0; j<K; j++){
			scanf("%d %d", &arrX[j], &arrY[j]);
		}
		scanf("%d",&W);
		
		int allzero=0;
		for(int j=0; j<K; j++){
			allzero += arrN[j];
		}
		if(allzero==0){
			printf("%d\n",0);
		} else {
			int exception = 1;
			for(int j=0; j< K; j++){
				if(arrY[j] == W){
					exception *= 0;
				}
			}
			if(exception == 1) {
				printf("%d\n",arrN[W-1]);
			}else {
				ans += arrN[W-1];
				int boolean = 0;
				while(boolean == 0){
					boolean = 1;
					int big = 0;
					int num = 0;
					for(int j = 0; j<K; j++){
						if(arrY[j] == W){
							if(big <= arrN[arrX[j]-1]){
								big = arrN[arrX[j]-1];	
								num = arrX[j];
							}
						} 
					}
					W = num;
					ans += big;
					for(int j=0; j<K; j++){
						if(arrY[j] == W){
							boolean *= 0;
						}
					}
					if(boolean==1){
						//ans += arrN[W-1];
					}
					//printf("%d\n",big);
				}
				printf("%d\n",ans);
			}

		}
		

	
	}
}
