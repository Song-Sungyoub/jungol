#include <stdio.h>

int main(){
	int n, score[20], tmp;
	int min = 100, max = 0;

	scanf("%d", &n);

	for(int i = 0;i<n;i++){
		scanf("%d", &score[i]);
	}
	
	for(int i = 0; i<n-1; i++){
		for(int j=0; j<n-i-1;j++){
			if(score[j]<score[j+1]){
				tmp = score[j];
				score[j] = score[j+1];
				score[j+1] = tmp;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("%d\n", score[i]);
	}
}
