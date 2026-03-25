#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int max = -999;
	int found = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 2 == 0 && arr[i] > max)
		{
			max = arr[i];
			found = 1;
		}
	}
	if (found)	return max;
	return found;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
	int n;
	int invalid = 0;
	int arr[100];
	if(scanf("%d", &n) != 1 || n < 0)
	{
		invalid = 1;
	}
	else
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
	}
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(invalid == 1)
  	{
  		return 0;
	}
	
	if(findLargestEvenNumber(arr, n))
	{
		printf("%d", findLargestEvenNumber(arr, n));
	}
	else
	{
		printf("There are no even number in %d elements", n);
	}
	

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
