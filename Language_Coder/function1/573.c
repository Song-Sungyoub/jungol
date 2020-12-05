#include <stdio.h>

void square(int n){
	for(int i=0;i<n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",i*4+j);
		}
		printf("\n");
	}
}

int main(){
	int input;

	scanf("%d", &input);
	square(input);
}
