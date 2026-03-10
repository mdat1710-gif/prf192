#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Point{
	float x;
	float y;
};
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	struct Point points[2];
	for(int i = 0; i < 2; i++)
	{
		scanf("%f%f", &points[i].x, &points[i].y);
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  	float d = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y - points[0].y, 2));
	printf("%.4f\n", d);
  	if(d == 0)
	{
		printf("Points are coincident\n");
	}
   //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
