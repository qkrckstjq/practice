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
int a=0;
int b=0;

for(int i=0; i<N; i++){
	b=0;
	for(int j=0; j<M; j++){
		sum=0;
		for(int k=0; k<N; k++){
			sum += arrA[a][k]*arrB[k][b];
		}
		printf("%d ",sum);	
		b++;
	}
	a++;
	printf("\n");
}


}
