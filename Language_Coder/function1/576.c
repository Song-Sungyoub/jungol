#include <stdio.h>

int calc(int a, int b, char op){
	int result;
	
	if(op == '+'){
		result = a+b;
	}else if(op=='-'){
		result = a-b;
	}else if(op=='*'){
		result = a*b;
	}else if(op == '/'){
		result = a/b;
	}else{
		result = 0;
	}
	
	return result;
}

int main(){
	char op;
	int n[2];

	scanf("%d %c %d", &n[0], &op, &n[1]);
	printf("%d %c %d = %d", n[0], op, n[1], calc(n[0], n[1], op));
}
