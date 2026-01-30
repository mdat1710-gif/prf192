//nhap thang in quy 
#include <stdio.h>
int main()
	{
		int thang;
		printf ("nhap vao thang:");
		scanf ("%d",&thang);
		int quy;
		switch(thang){
			case 1:
			case 2:
			case 3:
				quy = 1;
				break;
			case 4:
			case 5:
			case 6:
				quy = 2;
				break;
			case 7:
			case 8:
			case 9:
				quy = 3;
				break;
			case 10:
			case 11:
			case 12:
				quy = 4;
				break;
			default:
				printf ("nhap sai !");
				return 0;
		}
	printf ("thang %d thuoc quy %d",thang, quy);	
}