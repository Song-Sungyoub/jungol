#include <stdio.h>

int main(){
	int alpha[26] = {0. };
	char input;
	while(1){
		
		scanf(" %c", &input);
		if(input<65||input>65+26)
			break;
		alpha[input-65]++;
	}
	for(int i = 0;i<26;i++){
		if(alpha[i]!=0){
			printf("%c : %d\n", 65 + i, alpha[i]);
		}
	}
}
