#include <stdio.h>

int calc(int a, int b){
	int result = (a*a) - (b*b);
	
	return result>0?result:-1*result;
}

int main(){
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d", calc(a, b));
}
