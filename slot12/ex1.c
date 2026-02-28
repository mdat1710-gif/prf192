#include<stdio.h>

int getInput()
{
	int intNumber;
	int check;
	do
	{
		printf("Nhap so nguyen: ");
		check = scanf("%d", &intNumber);
		while(getchar() != '\n');
	}
	while(check != 1 || intNumber <= 0);
	return intNumber;
}

// Ham tinh uoc cac so nguyen
int sumDivisor(int n)
{
	int sum = 0;
	for(int i = 1;i <= n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

//Ham tim max
int findMax(int a, int b, int c)
{
	int max = a;
	if(b > max)
	{
		max = b;
	}
	if(c > max)
	{
		max = c;
	}
	return max;
}

//Ham in ma ASCII
void getOutputASCII()
{
	char alphabet;
	printf("%-50s\n", "Bang ma ASCII");
	printf("-------------------------\n");
	for(alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		printf("%c : %d\n", alphabet, alphabet);
	}
}

int main()
{
	int n = getInput();
	int sum = sumDivisor(n);
	printf("Tong uoc so cua %d la: %d \n\n", n, sum);
	int a = getInput();
	int b = getInput();
	int c = getInput();
	int max = findMax(a, b, c);
	printf("So lon nhat trong 3 so %d, %d, %d la: %d\n\n", a, b, c, max);
	getOutputASCII();
	return 0;	
}