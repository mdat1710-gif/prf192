#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int x, y;
  int sum = 0;
  printf("\nINPUT:\n");
  scanf("%d %d", &x, &y);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(x <= y)
  {
  	for(int i = x; i <= y; i++)
  	{
  		if(i % 2 != 0)
		{
			sum += i;
		}	
	}
  }
  else
  {
  	int z;
  	z = x;
  	x = y;
	y = z;  	
  	for(int i = x; i <= y; i++)
  	{
  		if(i % 2 == 1)
		{
			sum += i;
		}	
	}
  }
  printf("%d", sum);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}