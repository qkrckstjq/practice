#include <stdio.h>

int main () {
int N=0, M=0;  //N=행 M=열
scanf("%d %d",&N,&M);

int arrA[N][M];
int arrB[N][M];

for(int i = 0; i<N; i++){
	for(int j= 0; j<M; j++){
		scanf("%d",&arrA[i][j]);
	}
}
for(int i = 0l; i<N; i++){
	for(int j = 0; j<M; j++){
		scanf("%d",&arrB[i][j]);
	}
}
int sum=0;

for(int i=0; i<N; i++){
	for(int j=0; j<M; j++){
		printf("%d ",arrA[i][j]+arrB[i][j]);	
	}
	printf("\n");
}


}
