#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
	int maxId = 0;
	int minId = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] > arr[maxId])
		{
			maxId = i;
		}
		
		if(arr[i] < arr[minId])
		{
			minId = i;
		}
	}
	
	return arr[maxId] - arr[minId];

}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
	int n;
	int arr[100];
	int invalid = 0;
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
	if(invalid != 0)
	{
		return 0;
	}
	printf("%d", findDifference(arr, n));
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
