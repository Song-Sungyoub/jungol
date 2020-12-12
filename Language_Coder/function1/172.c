#include <stdio.h>

void makeRect(int n){
	int array[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			array[i][j] = (i+1)*(j+1);
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int input;
	scanf("%d", &input);
	
	makeRect(input);
}
