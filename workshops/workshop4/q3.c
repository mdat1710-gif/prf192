#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	
	int invalid = 0;
	if(n <= 0)
	{
		invalid = 1;
	}
	
	int a[100];
	
	if(invalid == 0)
	{
		for(int i = 0; i < n; i++) 
		{
			scanf("%d", &a[i]);
		}
	}
	
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  	if(invalid == 1)
  	{
  		printf("Invalid input");
		return 0;	
	}
	
	int even[n];
	int count = 0;

	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			even[count++] = a[i];
		}
	}

	int temp;
	for(int i = 0; i < count - 1; i++)
	{
		for(int j = i + 1; j < count; j++)
		{
			if(even[i] < even[j])
			{
				temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}

	for(int i = 0; i < count; i++)
	{
		printf("%d", even[i]);
		printf("\n");
	}
	
	
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
