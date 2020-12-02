#include <stdio.h>

int main(){
	int student[4][3];
	int sum[4] = {0, };

	for(int i = 0;i<4;i++){
		printf("%dclass? ", i+1);
		for(int j = 0;j<3;j++)
			scanf("%d", &student[i][j]);
	}
	for(int i = 0;i<4;i++){
		printf("%dclass : ", i+1);
		for(int j = 0;j<3;j++){
			sum[i] += student[i][j];
		}
		printf("%d\n", sum[i]);
	}
}
