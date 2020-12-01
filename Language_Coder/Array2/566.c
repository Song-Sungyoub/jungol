#include <stdio.h>

int main(){
	int input, array[3];

	scanf("%d", &input);
	array[0] = 100;
	array[1] = input;
	
	printf("%d %d ",array[0], array[1]);
	while(array[2]>=0){
		array[2] = array[0] - array[1];
		printf("%d ", array[2]);
		array[0] = array[1];
		array[1] = array[2];
	}
}
