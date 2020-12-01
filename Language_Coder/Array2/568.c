#include <stdio.h>

int main(){
	int f[2][4], s[2][4];

	printf("first array\n");
	for(int i = 0; i<2;i++){
		for(int j = 0; j<4;j++){
			scanf("%d", &f[i][j]);
		}
	}
	printf("second array\n");
	for(int i  = 0;i<2;i++){
		for(int j = 0; j<4;j++){
			scanf("%d", &s[i][j]);
		}
	}
	for(int i = 0;i<2;i++){
		for(int j = 0;j<4;j++){
			printf("%d ", f[i][j]*s[i][j]);
		}
		printf("\n");
	}
}
