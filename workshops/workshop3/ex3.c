#include <stdio.h>

//Ham tinh luong cong nhan theo gio lam
int calculateSalary(float hours, float rate) //rate: luong theo gio
{
	int salary = hours * rate;
	if(hours > 40)
	{
		salary = 40 * rate + (hours - 40) * rate * 1.5;
	}
	return salary;
}

int main()
{
	int hours, rate, salary;
	printf("Moi nhap gio lam: ");
	while(scanf("%d", &hours) != 1 || hours <= 0)
	{
		printf("Nhap sai roi! Moi nhap gio lam: ");
		while(getchar() != '\n');
	}
	printf("Moi nhap luong theo gio: ");
	while(scanf("%d", &rate) != 1 || rate <= 0)
	{
		printf("Nhap sai roi! Moi nhap luong theo gio: ");
		while(getchar() != '\n');
	}
	salary = calculateSalary(hours, rate);
	printf("Luong cong nhan theo gio lam la: %d", salary);
	return 0;
}
