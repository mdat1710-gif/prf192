#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
//@STUDENT: ADD YOUR CODE FOR FUNCTION HERE:
typedef struct  {
	int x;
	int y;
}point;
int main() {
  system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	int n;
	 scanf("%d",&n);
	 point ds[n];
	 for(int i=0;i<n;i++)
	 	scanf("%d%d",&ds[i].x,&ds[i].y); 
	 // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
int max = ds[0].x + ds[0].y;
int pos = 0;

for(int i = 1; i < n; i++) {
    int sum = ds[i].x + ds[i].y;
    
    if(sum > max) {
        max = sum;
        pos = i;
    }
}
printf("(%d,%d)", ds[pos].x, ds[pos].y);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}