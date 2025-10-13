#include <stdio.h>

void main(){
	int arr[10];
	int i, highest = 0;
	
	for(i = 0; i < 10; i++){
		printf("Enter Student %d marks: ", i+1);
		scanf("%d", &arr[i]);
		
		if(arr[i] > highest){
			highest = arr[i];
		}
	}
	
	printf("\nHighest Marks: %d", highest);
	
	
}
