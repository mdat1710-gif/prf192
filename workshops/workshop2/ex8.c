//Su dung thuat toan Euclid voi vong lap while de tim UCLN cua 2 so a, b.

#include <stdio.h>

int main() {
    int a, b, soDu;
	printf("Nhap 2 so a, b: ");
    while(scanf("%d %d", &a, &b)!=2)
	{
		printf("Nhap lai 2 so a, b: ");
		while(getchar()!='\n');
	}
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        soDu = a % b;
        a = b;
        b = soDu;
    }
    printf("UCLN = %d\n", a);
    return 0;
}
