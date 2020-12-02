#include <stdio.h>

void myFunc(int n){
	for(int i=0;i<n;i++){
		printf("~!@#$^&*()_+|\n");
	}
}

int main(){
	int input;
	scanf("%d", &input);
	myFunc(input);
}
