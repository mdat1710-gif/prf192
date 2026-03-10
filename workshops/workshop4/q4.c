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
	scanf("%d", &n);
	int a[100];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  	int found = 0;
	
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0)
		{
			
			int duplicate = 0;
			for(int j = 0; j < i; j++)
			{
				if(a[i] == a[j])
				{
					duplicate = 1;
					break;
				}
			}
			
			if(!duplicate){
				int count = 0;
				for(int k = 0; k < n; k++)
				{
					if(a[k] == a[i])
					{
						count++;
					}
				}
				
				printf("%d-%d\n", count, a[i]);
				found = 1;
			}
		}
	}
	
	if(found == 0){
		printf("Not found");
	}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
