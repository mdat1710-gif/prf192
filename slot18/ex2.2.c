#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int x;
	int y;
}Point;

void inputPoint(Point *p, int n)
{
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &(p+i)->x, &(p+i)->y);	//dùng con trỏ --> (p+i)->x, (p+i)->y
	}
}
int cmpPoint(Point *p, int n)
{
	int maxId = 0;
	for(int i = 0; i < n; i++)
	{
		if((p+i)->x + (p+i)->y > (p+maxId)->x + (p+maxId)->y)
		{
			maxId = i;
		}
	}
	return maxId;
}

void outputPoint(Point *p, int n)
{
	int maxId = cmpPoint(p, n);
	printf("(%d,%d)", (p+maxId)->x, (p+maxId)->y);
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	scanf("%d", &n);
	Point p[n];
	inputPoint(p, n);
	

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	outputPoint(p, n);

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
