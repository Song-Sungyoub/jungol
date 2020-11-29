#include <stdio.h>

int main(){
	char str[] = {'J', 'U', 'N', 'G', 'O', 'L'};
	char v_ch;

	scanf("%c", &v_ch);
	for(int i=0; i<6;i++){
		if(v_ch == str[i]){
			printf("%d", i);
			return 0;
		}
	}
	printf("none");
	return 0;
}
