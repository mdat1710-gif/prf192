#include<stdio.h>
int main()
{
	int N,t;
	printf ("Nhap so dien: ");
	scanf ("%d",&N);
	if (N<=100)
	t = 950 * N;
	else
		{
			if (N<=150)
			t = 1250 * N;
			else 	
			{
				if(N<=200)
				t = 1350 * N;
				else 
				t = 1550 * N;
			}
	}
	printf ( "so tien dien la: %d",t);
}