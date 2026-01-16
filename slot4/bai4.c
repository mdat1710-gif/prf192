//Nhap 2 so nguyen a, b. In ra ket qua phep toan /. (Neu b=0 thi in "Khong the chia cho 0")

#include <stdio.h>
int main()
{
	int a, b;
	char pt;
	printf("Nhap a, b: ");
	scanf (" %d, %d",&a ,&b);
	float kq = (float)a/b;
	printf ("Nhap phep toan:");
	scanf (" %c",&pt);
	if (pt == '/')
	{
		if (b!=0)
		{
			printf("Ket qua: %d %c %d = %.02f",a,pt,b,kq);
		}
		else
		{
			printf("Khong the chia cho 0");
		}
		return 0;
	}
	printf ("Bai toan if, if-else");
}