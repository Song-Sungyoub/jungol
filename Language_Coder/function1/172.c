#include <stdio.h>

int main(){
	int input;
	scanf("%d", &input);
	int array[input][input];

	for(int i=0;i<input;i++){
		for(int j=0;j<input;j++){
			array[i][j] = (i+1)*(j+1);
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}
