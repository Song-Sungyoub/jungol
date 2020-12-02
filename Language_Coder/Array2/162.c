#include <stdio.h>

int main(){
	int n[10];

	scanf("%d %d", &n[0], &n[1]);
	printf("%d %d ", n[0], n[1]);
	for(int i = 2;i<10;i++){
		n[i] = (n[i-1] + n[i-2])%10;
		printf("%d ", n[i]);
	}
}
