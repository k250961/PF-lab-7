//Question 6: A shopkeeper keeps a record of daily sold items using an array of item codes. However, one of the
//items (say item code 3) was found to be defective. Now the shopkeeper wants to remove all occurrences of that
//defective item code (3) from the record, so that only valid items remain in the list. Write a C program that helps the
//shopkeeper remove all occurrences of a given item code from the array and display the updated list of items.

#include <stdio.h>

int main(void)
{
	int arr[]={1,2,3,4,5,7,2,3,4,6,3,3,7,9,2,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	int defect = 3, i, j=0;
	
	for (i=0; i<n; i++)
	{
		if (arr[i] != defect)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	
	for (i=0; i<j; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
