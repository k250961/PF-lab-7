#include <stdio.h>
void main(){
	int roll[12] = {12, 12, 13, 14, 14, 15, 16, 16, 17, 18, 19, 19};
	int i, j = 1;
	for(i = 1; i < 12; i++){
		if(roll[i] != roll[i-1]){
			roll[j] = roll[i];
			j++;
		}
	}
	
	for(i = 0; i < j; i++){
		printf("\n%d", roll[i]);
	}
}
