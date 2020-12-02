#include <stdio.h>

int main(){
	int score[11]={0,};
	int input;

	while(1){
		scanf("%d", &input);
		if(!input)
			break;
		if(input==100)
			score[10]++;
		else
			score[(input/10)%10]++;
	}
	for(int i = 10;i>=0;i--){
		if(score[i])
			printf("%d : %d person\n", i*10, score[i]);
	}
}
