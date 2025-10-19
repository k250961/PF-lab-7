//Question 8: A software company wants to rotate the weekly shifts of its employees. The employees are identified
//by unique IDs stored in an array. Every Monday, management performs a right circular rotation of the employee
//list to assign new shift orders. Write a C program that takes an array of employee IDs and rotates it right by k
//positions to represent the new shift order.

#include <stdio.h>

int main (void)
{
	int k, i, j,n;
	
	printf("Enter employees: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter employee IDs: ");
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter k to rotate positions: ");
	scanf("%d", &k);
	
	k=k%n;
	
	for (i=0,j=n-1; i<j; i++,j--)
	{
		int temp=arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
		
	}
	
	for (i=0,j=k-1; i<j; i++,j--)
	{
		int temp=arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
		
	}
	

	for (i=k,j=n-1; i<j; i++,j--)
	{
		int temp=arr[i];
		arr[i]= arr[j];
		arr[j]= temp;
		
	}
	
	for (i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
