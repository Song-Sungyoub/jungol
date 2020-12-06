#include <stdio.h>

void nine(int a, int b){
	int tmp;
	if(a>b){
		tmp = a;
		a = b;
		b = tmp;
	}
	for(int i = a;i<=b;i++){
		printf("== %ddan ==\n", i);
		for(int j=1;j<=9;j++){
			printf("%d * %d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
}

int main(){
	int a, b;

	scanf("%d %d", &a, &b);

	nine(a,b);
}
