#include <stdio.h>
int main()
{
	float cc , gk, ck;
	char diemChu;
	float tk;
	printf("Nhap diem chuyen can: ");
	int kq = scanf(" %f",&cc);
	if (cc<0 || cc>10 || kq != 1)
	{
		printf("Nhap sai!");
		return 0;
	}
	else
	{
		printf("Nhap diem giua ky: ");
		kq = scanf(" %f",&gk);
		if (gk<0 || gk>10 || kq != 1)
		{
			printf("Nhap sai!");
			return 0;
		}
		else
		{
			printf("Nhap diem cuoi ky: ");
			kq = scanf(" %f",&ck);
			if (ck<0 || ck>10 || kq != 1)
			{
				printf("Nhap sai!");
				return 0;
			}
	else
	{
		tk = cc * 0.1 + gk + 0.3 + ck * 0.6;
		if (tk >= 8.5)
		{
			diemChu = 'A';
		}
		else
		{
				if (tk >= 7)
			{
				diemChu = 'B';
			}
			else
			{
				if (tk >= 5.5)
				{
					diemChu = 'C';
				}
				else
				{
					if (tk >= 4)
					{
						diemChu = 'D';
					}
					else
					{
						diemChu = 'F';
					}
				}
			}
		}
		printf ("Diem tong ket: %.2f \n",tk);
		printf ("Diem chu: %c \n", diemChu);
		if (cc < 4 || gk < 4 || ck < 4 || diemChu == 'F')
		{
			printf ("Khong du dieu kien tot nghiep \n");
		}
		else
		{
			printf (" du dieu kien tot nghiep \n");
		}
	}
	return 0;
}
}}