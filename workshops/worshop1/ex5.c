
#include <stdio.h>
int main()
{
	int t,m;
	float km;
	printf ("nhap so km:");
	int kq = scanf ("%f",&km);
	if (kq!=1 || km<=0)
	{
	printf ("nhap sai !");
	return 0;
}
	printf ("\n thoi gian cho:");
	kq = scanf ("%d",&t);
	if (kq!=1 || t<0)
	{
	printf ("nhap sai !");
	return 0;
}
	if (t>5)
		m = 1000 * (t-5);
	else {
		m=0;
}
	if (km<0.5)
		m =m + 12000;
	else 
		{
			if (km <=30)
				m = 12000 + (km - 0.5) * 15000 + m ;
			else 
				m = 12000 + (30 - 0.5) * 15000 + (km - 30) * 12000 + m;
            
		}
	printf("Tong tien: %.d ",m);
	printf("\n|  So km   | So phut cho |  Tien   |\n");
    printf("|   %-6.1f |      %-7d| %-7.0d |\n", km, t, m);

	
}