#include <stdio.h>

void print_a(void){
	for(int i = 0; i<10;i++)
		printf("@");
	printf("\n");
}

int main(){
	printf("first\n");
	print_a();
	printf("second\n");
	print_a();
	printf("third\n");
	print_a();
}
