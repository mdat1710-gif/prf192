#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
#define ROWS 2
#define COLS 3
void findRowMin(int matrix[ROWS][COLS], int result[COLS]) {
    // Your logic here
    for(int i = 0; i < ROWS; i++)
    {
    	int min = matrix[i][0];
    	for(int j = 0; j < COLS; j++)
    	{
    		if(matrix[i][j] < min)
    		{
    			min = matrix[i][j];
			}
		}
		result[i] = min;
	}
}

/**
 * TODO: Implement the function to display the result array.
 */
void displayResults(int result[ROWS]) {
	for(int i = 0; i < ROWS; i++)
	{
		printf("%d\n", result[i]);
	}
    
}
int main() {
  system("cls");
  printf("INPUT:\n");	
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int matrix[ROWS][COLS];
	int result[ROWS];
	int invalid = 0;
	for(int i = 0; i < ROWS; i++)
	{
		for(int j = 0; j < COLS; j++)
		{
			if(scanf("%d", &matrix[i][j]) != 1)
			{
				invalid = 1;
			}
		}
	}
  	
  	
  	
    // OUTPUT: Hiển thị kết quả ra màn hình
    printf("\nOUTPUT:\n");
    if(invalid == 1)
    {
    	printf("INVALID INPUT");
    	return 0;
	}
	findRowMin(matrix, result);
	displayResults(result);




  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
 