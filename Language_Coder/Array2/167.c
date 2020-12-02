#include <stdio.h>

int main(){
	int array[4][2];

	for(int i = 0;i<4;i++){
		for(int j = 0;j<2;j++){
			scanf("%d", &array[i][j]);
		}
	}
	
	//가로평균
	for(int i = 0;i<4;i++){
		int sum = 0, avg;
		for(int j =0;j<2;j++){
			sum+=array[i][j];
		}
		avg = sum/2;
		printf("%d ", avg);
	}
	printf("\n");

	//세로평균
	for(int j = 0;j<2;j++){
		int sum = 0, avg;
		for(int i = 0 ; i<4;i++){
			sum+=array[i][j];
		}
		avg = sum/4;
		printf("%d ", avg);
	}
	printf("\n");

	//전체평균
	int sum = 0, avg;
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			sum += array[i][j];
		}
	}
	avg = sum / 8;
	printf("%d", avg);
}
