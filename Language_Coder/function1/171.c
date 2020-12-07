#include <stdio.h>

int allSum(int n){
	int sum=0;

	for(int i = 1;i<=n;i++)
		sum += i;
	
	return sum;
}

int main(){
	int input;

	scanf("%d", &input);

	printf("%d", allSum(input));
}
