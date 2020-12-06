#include <stdio.h>

int square(int a, int b){
	int result = 1;
	for(int i=0;i<b;i++)
		result *= a;
	return result;
}

int main(){
	int input[2];

	scanf("%d %d", &input[0], &input[1]);

	printf("%d", square(input[0], input[1]));
}
