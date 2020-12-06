#include <stdio.h>

int check(void){
	int n[3];
	int max;
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	max = n[0];
	for(int i=1;i<3;i++){
		max = max>n[i]?max:n[i];
	}

	return max;
}

int main(){
	printf("%d", check());

}
