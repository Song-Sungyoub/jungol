#include <stdio.h>

int main(){
	int n[100];
	int min=999, max=0;
	
	for(int i = 0; i<100;i++){
		scanf("%d", &n[i]);
		if(n[i]==999){
			break;
		}
		if(min>n[i]){
			min = n[i];
		}
		if(max<n[i]){
			max = n[i];
		}
	}
	printf("max : %d\nmin : %d", max, min);
}
