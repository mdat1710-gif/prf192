//square root : can b?c 2
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
	int invalid = 0;
	if(scanf("%d", &n) != 1 || n < 0)
	{
		invalid = 1;
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");

  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(invalid == 1)
	{
		printf("-1");
		return 0;
	}
	
	double result = sqrt(n);
	printf("%.3lf", result);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
