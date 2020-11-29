#include <stdio.h>

int main(){
	int n[100];
	int input, cnt=0, sum = 0;
	float avg;
	for(int i=0;i<100;i++){
		scanf("%d", &input);
		if(input==0){
			break;
		}
		if(input%5==0){
			cnt++;
			sum+=input;
		}
		
	}
	avg = (float)sum/cnt;
	printf("Multiples of 5 : %d\nsum : %d\navg : %.1lf", cnt, sum, avg);
}
