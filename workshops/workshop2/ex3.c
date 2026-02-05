//Nhap n nguyen (1<=n<=10). In so tu 1 den n.

#include <stdio.h>
int main()
{
	int n;
	int count=1;
	int tich=1;
	printf("Nhap n: ");
	while(scanf("%d",&n)!=1 || n<1 || n>10)
	{
		printf("Nhap lai n: ");
		scanf("%d",&n);
		fflush(stdin);
	}
	
	while(count<=n)
	{
		printf("%d ", count);
		count ++;
	}
	count=1;
	while(count<=10)
	{
		tich = n*count;
		printf("\n%d * %d = %d", n, count, tich);
		count++;
	}
	return 0;
}