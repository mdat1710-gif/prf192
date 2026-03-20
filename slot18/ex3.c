#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int id;
	char name[100];
	int price;
}Book;

int maxPrice(Book b[], int n)
{
	int maxId = 0;
	for(int i = 0; i < n; i++)
	{
		if(b[i].price > b[maxId].price)
		{
			maxId = i;
		}
	}
	return maxId;
}

int fBook(Book b[], int n, int *opt)
{
	for(int i = 0; i < n; i++)
	{
		if(b[i].id == *opt)
		{
			*opt = i+1;
		}
	}
	return *opt;
}

void separator()
{
	printf("\n");
	for(int i = 1; i <= 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void sortAsd(Book b[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(b[i].price > b[j].price)
			{
				Book temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	scanf("%d", &n);
	Book b[n];
	for(int i = 0; i < n; i++)
	{
		printf("Book %d:\n", i+1);
		printf("ID: ");
		scanf("%d", &b[i].id);
		
		printf("NAME: ");
		while(getchar() != '\n');
		fgets(b[i].name, 100, stdin);
		b[i].name[strcspn(b[i].name, "\n")] = '\0';
		
		printf("PRICE: ", i+1);
		scanf("%d", &b[i].price);
		printf("\n");
	}
	
	separator();
	
	int opt;
	printf("What book ID do you want to find?\n");
	printf("Enter your answer: ");
	scanf("%d", &opt);
	
	


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int maxId = maxPrice(b, n);
	printf("Book has highest price is: Book %s\n", b[maxId].name);
	printf("Book id: %d\n", b[maxId].id);
	printf("Book price: %d\n", b[maxId].price);
	
	separator();
		int check = fBook(b, n, &opt);
	if(check == 0)
	{
		printf("Not found\n");
	}
	else
	{
		opt--;
		printf("Book you have chosen:\n");
		printf("Book ID: %d\n", b[opt].id);
		printf("NAME: %s\n", b[opt].name);
		printf("PRICE: %d\n", b[opt].price);
	}
	
	separator();
	
	printf("Sort ascending (according to price):\n");
	sortAsd(b, n);
	
	for(int i = 0; i < n; i++)
	{
		printf("Book %d:\n", i+1);
		printf("ID: %d\n", b[i].id);
		
		printf("NAME: %s\n", b[i].name);
		
		
		printf("PRICE: %d\n", b[i].price);
		printf("\n");
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}