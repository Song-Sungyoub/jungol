#include <stdio.h>

void func(int *a, int *b){
	int x = *a, y = *b;
	*a = x>y?x/2:x*2;
	*b = x>y?y*2:y/2;
}

int main(){
	int a, b;

	scanf("%d %d", &a, &b);	
	
	func(&a, &b);
	printf("%d %d", a, b);
}
