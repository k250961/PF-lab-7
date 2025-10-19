//Question 5: A shopkeeper is checking the prices of items in his store. He has a list of item prices stored in an array.
//A customer comes and says:
//“I want to buy two items whose total price is exactly equal to my budget.”
//The shopkeeper wants to quickly find which two items have prices that add up to the customer’s given budget (it is
//also called 2 sum problem). You are required to help him by writing a C program that finds and displays the pair of
//item prices whose sum equals the given budget.
#include <stdio.h>

int main (void)
{
	int prices[]={100, 150, 140, 130, 400, 220, 340, 120, 390, 500};
	int n = sizeof(prices) / sizeof(prices[0]);
	int budget,i,j;
	int matchFound = 0;
	
	printf("I want to buy two items whose total price is exactly equal to my budget. My budget is: ");
	scanf("%d", &budget);
	
	for (i=0; i<n; i++)
	{
		for (j=i+1; j<n; j++)
		{
			if (prices[i] + prices[j] == budget)
			{
				printf("Found a match! The customer can buy the items with prices: %d and %d\n", prices[i], prices[j]);
				matchFound = 1;
			}
		}
	}
	
	if (matchFound == 0)
	{
        printf("Sorry, no two items in the store add up to the budget of %d.\n", budget);
    }
    
	return 0;
}
