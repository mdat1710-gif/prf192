//Nhap so thuc: 12.2567. In gia tri da nhap, phan nguyen, phan thuc.

#include <stdio.h>
int main()
{
	float soThuc;
	printf ("Nhap so thuc: ");
	scanf (" %f",&soThuc);
	int phanNguyen = soThuc;
	float phanThapPhan = soThuc - phanNguyen;
	printf ("Gia tri da nhap: %.4f\n",soThuc);
	printf ("Phan nguyen la: %d\n", phanNguyen);
	printf ("Phan thap phan la: %.4f", phanThapPhan);
	return 0;
}