//Tinh tong cac so nguyen duong tu ban phim den khi nhap so 0.

#include <stdio.h>
int main()
{
	int n, dem=1;
	int tong=0;	
	while(1)
	{
		printf("Nhap so nguyen thu %d: ",dem);
		while(scanf("%d",&n)!=1 || n<0)
		{
			printf("Nhap lai so nguyen thu %d: ",dem);
			fflush(stdin);
		}
		if(n!=0)
		{
			tong +=n;
			printf("tong = %d\n", tong);
			dem++;
		}
		else
		{
			printf("tong cac so nguyen duong da nhap la: %d\n",tong);
			return 0;	
		}
	}
}