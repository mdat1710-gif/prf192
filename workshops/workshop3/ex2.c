
#include <stdio.h>

int calculateTaxiFare(float distance)
{
	int price;
	if(distance <= 1)
	{
		price = 15000 * distance;
	}
	else if(distance <= 30)
	{
		price = 15000 + 12000 * (distance - 1);
	}
	else
	{
		price = 15000 + 12000 * 29 + 10000 * (distance - 30);
	}
	return price;
}

int main()
{
	float distance;
	int check, price;
	do
	{
		printf("Nhap so km: ");
		check = scanf("%f", &distance);
		while(getchar() != '\n');
		if(check != 1)
		{
			printf("Nhap sai roi! Nhap lai di!\n");
		}
	}while(distance <= 0);
	price = calculateTaxiFare(distance);
	printf("Tien cuoc taxi la: %d", price);
	return 0;
}
