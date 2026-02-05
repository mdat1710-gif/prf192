//Viet chuong trinh chuyen mot so thap phan sang he nhi phan bang cach chia lien tiep cho 2

#include <stdio.h>
int main()
{
	int n, soDu;
	long long binary = 0;
	int viTri = 1;
	printf("Nhap n: ");
	while(scanf("%d",&n) != 1 || n<0)
	{
		printf("Nhap lai n: ");
		while (getchar() != '\n');
	}
	if(n==0)
	{
		printf("So nhi phan: 0\n");
	}
	else
	{
		while(n>0)
		{
			soDu = n%2;
			binary = binary + soDu*viTri;
			viTri = viTri*10;
			n = n/2;
		}
	}
	printf("So nhi phan: %lld\n", binary);
	return 0;
}