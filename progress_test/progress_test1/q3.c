#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  int n;
    float S = 0;
    float gt = 1;
	printf("\nINPUT:\n");
    scanf("%d", &n);
	if (n==0){
		printf (" n must be greater than 0");
		return 0;
	}
	// Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i = 1; i <= n; i++) {
        gt = gt * i;     
        S = S + 1.0f / gt;  
    }
    printf("%.3f", S);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
