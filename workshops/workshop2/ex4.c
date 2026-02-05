//Nhap so nguyen n, su dung while va toan tu %, / de in ra so dao nguoc cua no.

#include <stdio.h>
int main()
{
	int n, soDu;
	int kq=0;
	int soAm=0;
	printf("Nhap so nguyen n: ");
	while(scanf("%d",&n)!=1)
	{
		printf("Nhap lai n: ");
		while(getchar()!='\n');
	}
	if(n<0)
	{
		soAm=1;
		n=-n;
	}
	while(n!=0)
	{
		soDu=n%10;
		kq=kq*10+soDu;
		n=n/10;
	}
	if(soAm==1)
	{
		kq=-kq;
	}
	printf("So nghich dao la: %d",kq);
	return 0;
}