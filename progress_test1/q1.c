#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  float a,b,kq;
  printf("\nINPUT:\n");
  scanf ("%f %f",&a,&b);
  fflush(stdin);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  if (a==0){
  	printf ("Error: Division by zero");
  	return 0;}
	else{
		kq=cbrt(-b/a);
	}
  printf ("%.3f",kq);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
