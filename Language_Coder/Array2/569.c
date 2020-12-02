#include <stdio.h>

int main(){
	int score[5][4];
	float avg[5];
	int cnt = 0;

	for(int i = 0 ; i<5; i++){
		for(int j = 0;j<4;j++){
			scanf("%d", &score[i][j]);
			avg[i] += score[i][j];
		}
		avg[i] /= 4;
	}
	for(int i = 0; i<5;i++){
		if(avg[i]>=80){
			printf("pass");
			cnt++;
		}else{
			printf("fail");
		}
		printf("\n");
	}
	printf("Successful : %d", cnt);
	
}
