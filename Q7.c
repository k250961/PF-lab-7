//Question 7: A class teacher has two sections, Section A and Section B. Each section’s roll numbers are stored
//separately in two arrays. Now, the teacher wants to combine both sections’ roll numbers into one list so she can
//prepare a single attendance sheet for the whole class. Write a C program that merges the roll numbers of both
//sections into one new array and displays the final combined list.

#include <stdio.h>

int main (void)
{
	int sectionA[] = {101, 102, 103, 104, 105};
    int sizeA = sizeof(sectionA) / sizeof(sectionA[0]);

    int sectionB[] = {201, 202, 203, 204, 205, 206};
    int sizeB = sizeof(sectionB) / sizeof(sectionB[0]);
    
    int size= sizeA+sizeB;
    
    int allclass[size];
    int i,j;
    
    for (i=0; i<sizeA; i++)
    {
    	allclass[i] = sectionA[i];
	}
	for (i=0; i<sizeB; i++)
    {
    	allclass[sizeA+i] = sectionB[i];
	}
	for (i=0; i<size; i++)
    {
    	printf("%d ", allclass[i]);
	}
	printf("\n");
	return 0;
	
}
