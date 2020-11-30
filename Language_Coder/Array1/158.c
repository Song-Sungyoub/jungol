#include <stdio.h>

int main(){
	int cnt = 0;
	int n[100];

	for(int i = 0; i<100;i++){
		scanf("%d", &n[i]);
		if(n[cnt++]==0){
			break;
		}
	}
	printf("%d\n", --cnt);
	for(int i = 0;i<cnt;i++){
		if(n[i]%2 == 0){
			printf("%d ", n[i]/2);
		}
		else{
			printf("%d ", n[i]*2);
		}
	}
}
