#include <stdio.h>

int main(){
	int input;
	scanf("%d", &input);
	int array[input][input];

	for(int i = 0;i<input;i++){
		array[i][0] = 1;
		array[i][i] = 1;
	}
	for(int i = 2;i<input;i++){
		for(int j = 1;j<i;j++){
			array[i][j] = array[i-1][j-1]+ array[i-1][j];
		}
	}
	for(int i = input-1;i>=0;i--){
		for(int j = 0;j<=i;j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
