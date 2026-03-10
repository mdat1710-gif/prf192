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
  int invalid =0;
  if(scanf("%d", &n) !=1 || n <2){
  	invalid = 1;
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(invalid ==1 ){
  	printf("Invalid input");
  	return 0;
  }
  
  for(int i=1;i <= n;i++){
  	for(int j=1;j <= n-i;j++)
  	   printf(" ");
  	for(int j=1;j <=2*i-1;j++)
  	   printf("*");
  	 printf("\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
