#include <stdio.h>

int main(){
	int n[6] = {0,};
	int input;

	for(int i = 0 ; i<10;i++){
		scanf("%d", &input);
		n[input-1]++;
	}

	for(int i = 0;i<6;i++){
		printf("%d : %d\n", i+1, n[i]);
	}
}
