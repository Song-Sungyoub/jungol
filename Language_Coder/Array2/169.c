#include <stdio.h>

int main(){
	char array[3][5];	
	for(int i = 0;i<3;i++){
		for(int j = 0;j<5;j++){
			scanf(" %c",&array[i][j]);
		}
	}
	for(int i = 0; i<3;i++){
		for(int j = 0;j<5;j++){
			printf("%c ",array[i][j]+32);
		}
		printf("\n");
	}
}
