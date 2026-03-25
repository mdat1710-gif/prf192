#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//Hàm tính tổng các chữ số
int sumDigits(int n)
{
	int sum = 0;
	while(n != 0)
	{
			sum += abs(n%10);
			n /= 10;
	}
	return sum;
}

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
	
	printf("%d", sumDigits(n));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
