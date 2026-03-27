#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  
	FILE*fp;
	fp = fopen("baitap1.txt","w");
	//kiem tra thanh cong 
	if (fp==NULL){
		printf ("ERROR!");
		return 0;
	}
	int n;
	printf ("nhap vao so n: ");
	scanf ("%d",&n);
	fprintf(fp,"Gia tri n: %d",n);
	fclose(fp);
	fp = fopen("baitap1.txt","r");
	if (fp==NULL){
			printf ("ERROR!");
			return 0;
	}
	char s;
	do{
		s = getc(fp);
		printf ("%c",s);
	}
	while(s != EOF);
		fclose(fp);
	
	
	
	  return(0);
}