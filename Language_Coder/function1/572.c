#include <stdio.h>

double pi_calc(int a){
	return a*a*3.14;
	
}

int main(){
	int input;

	scanf("%d", &input);

	printf("%.2lf", pi_calc(input));
}
