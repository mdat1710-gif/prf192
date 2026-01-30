//nhap vao so nguyen a,b.
//nhap vao 1 trong 5 phep toan: + - * / %
#include <stdio.h>
int main()
{
	int a,b; 
	float kq;
	char pt;
	scanf ("%d, %d",&a,&b);
	scanf (" %c", &pt);
	switch (pt)
	{
		case '+':
			kq = a + b;
			break;
		case '-':
			kq = a - b;
			break;
		case '*':
			kq = a * b;
			break;
		case '/': 
			if (b==0)
		{
			printf ("khong the chia cho 0");
			return 0;
		}
			else 
			kq = (float) a / b;
			printf ("%d %c %d = %.2f",a , pt ,b ,kq);
			return 0;
		case '%':
			if (b==0)
			{
			printf ("khong the chia cho 0");
			return 0;}
			else 
			kq = a % b;
			break;
		default: 
			printf ("nhap sai !");
			return 0;
	}
	printf ("%d %c %d = %.0f",a,pt,b,kq);
}