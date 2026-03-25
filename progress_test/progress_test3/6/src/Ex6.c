#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//Hàm swap vị trí min max
void swapMinMax(int arr[], int n)
{
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
	int temp = arr[maxId];
	arr[maxId] = arr[minId];
	arr[minId] = temp;
}

int main() {
  system("cls");
  printf("INPUT:\n");

  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
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
	swapMinMax(arr, n);
	for(int i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
