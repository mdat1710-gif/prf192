#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a, b;
	int invalid = 0;
	float result;
	if(scanf("%f%f", &a, &b) != 2)
	{
		invalid = 1;
	}
    // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(invalid == 1)
	{
		printf("Invalid input");
		return 0;
	}
		result = pow((pow(a, 2) + pow(b, 2)), 1.0/3);
	printf("%.2f", result);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
