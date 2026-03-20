#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//typedef: không cần gọi lại hàm struct khi sử dụng
typedef struct{
	int x;
	int y;
}Point;
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	Point p1, p2;
	p1.x = 1;
	p1.y = 4;
		scanf("%d%d", &p2.x, &p2.y);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("(%d,%d)\n(%d,%d)", p1.x, p1.y, p2.x, p2.y);



  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
