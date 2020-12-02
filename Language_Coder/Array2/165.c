#include <stdio.h>

int main(){
	int array[5][7]={{0,1,0,1,0,1,0}};
	
	printf("%d %d %d %d %d \n", 1, 0, 1, 0, 1);
	for(int i =1;i<5;i++){
		for(int j = 1;j<6;j++){
			array[i][j] = array[i-1][j-1] + array[i-1][j+1];
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
