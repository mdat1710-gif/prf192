// Nhap du 5 so. Tinh can bac 2 cua 5 so.

#include <stdio.h>
#include <math.h>
int main()
{
	float n;
	int count=0;
	while(1)
	{
		printf("Nhap n: ");
		while(scanf("%f",&n)!=1 || n<=0 || n>1000)
		{
			printf("Nhap lai n: ");
			scanf("%f",&n);
			
			fflush(stdin);
		}
		printf("Can bac 2 la: %.2f\n",sqrt(n));
		count++;
		if(count==5)
		{
			break;
		}
	}
	printf("Da xong. Xuat sac!");
	return 0;
}