#include <stdio.h>

int main(){
	int array[4][3] = {{3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1}};
	int sum = 0;

	for(int i = 0; i<4;i++){
		for(int j = 0 ; j<3;j++){
			printf("%d ", array[i][j]);
			sum += array[i][j];
		}
		printf("\n");
	}

	printf("%d", sum);
}
