#include <stdio.h>

void showMenu()
{
	printf("+\n");
	printf("-\n"); 
	printf("*\n");
	printf("/\n"); 
	printf("0. Quit\n");
	printf("Moi nhap lua chon cua ban: ");
}	

void processor()
{
	double n, result;
	char opt;
	printf("Moi nhap so dau tien: ");
	while(scanf("%lf", &result) != 1)
	{
		printf("Moi nhap lai so dau tien: ");
		while(getchar() != '\n');
	}
	do
	{
		showMenu();
		while(getchar() != '\n');
		scanf("%c", &opt);
		
		if(opt == '+' || opt == '-' || opt == '*' || opt == '/')
		{
			printf("Moi nhap so tiep theo: ");
			while(scanf("%lf", &n) != 1)
			{
				while(getchar() != '\n');
				printf("Moi nhap lai so tiep theo: ");
			}
		}
		
		switch(opt)
		{
			case '+':
			{
				result += n;
				printf("Ket qua: %.2lf\n", result);
				break;
			}
			case '-':
			{
				result -= n;
				printf("Ket qua: %.2lf\n", result);
				break;
			}
			case '*':
			{
				result *= n;
				printf("Ket qua: %.2lf\n", result);
				break;
			}
			case '/':
			{
				if(n == 0)
				{
					printf("Khong the chia cho 0!\n");
					break;
				}
				else
				{
					result /= n;
					printf("%.2lf\n", result);
					break;
				}
			}
			case '0':
			{    
				break;
			}
			default:
			{
				printf("Nhap sai roi! Nhap lai di!\n");
				break;
			}
		}
	}while(opt != '0');
}

int main()
{
	processor();
	return 0;
}
