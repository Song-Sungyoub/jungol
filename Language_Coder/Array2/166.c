#include <stdio.h>

int main(){
	int array[2][2][3];
	char *count[2] = {"first", "second"};

	for(int n = 0;n<2;n++){
		printf("%s array\n", count[n]);
		for(int i = 0;i<2;i++){
			for(int j = 0;j<3;j++){
				scanf("%d", &array[n][i][j]);
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j = 0;j<3;j++){
			printf("%d ", array[0][i][j] * array[1][i][j]);
		}
		printf("\n");
	}
}
