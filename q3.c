#include <stdio.h>
void main(){
	int ids[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Enter Employee Id %d: ", i+1);
		scanf("%d", &ids[i]);
	}
	
	int arr2[10];
	
	printf("\n");
	int j = 0;
	for(i = 0; i < 10; i++){
		if(ids[i] % 2 == 0){
			arr2[j] = ids[i];
			j++;
		}
	}
	
	for(i = 0; i < 10; i++){
		if(ids[i] % 2 != 0){
			arr2[j] = ids[i];
			j++;
		}
	}
	
	printf("\nSorted Array: ");
	for(i = 0; i < 10; i++){
		printf("  %d", arr2[i]);
	}
}
