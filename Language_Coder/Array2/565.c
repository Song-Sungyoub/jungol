#include <stdio.h>

int main(){
	int input;
	int n[10] = {0,};

	while(1){
		scanf("%d", &input);
		if(input==0)
			break;
		n[(input/10)%10]++;
	}
	for(int i = 0; i<10 ;i++){
		if(n[i]!=0)
			printf("%d : %d\n", i, n[i]);
	}
}
