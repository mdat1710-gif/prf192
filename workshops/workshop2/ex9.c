//Game doan so: May tinh chon ngau nhien 1 so từ 1-100. Nguoi dung nhap so doan cho den khi dung. Sau moi lan sai, may goi y "Lon hon" hoac "Nho hon".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, doan;
    srand(time(NULL));
    random = rand()%100 + 1;
    printf("Game doan so (1 - 100)\n");
    printf("Nhap so ban doan: ");
    while (1)
    {
        while (scanf("%d", &doan)!=1 || doan<=0 || doan>100)
        {
            printf("Nhap sai! Hay nhap so nguyen (1-100): ");
            while (getchar() != '\n');
        }

        if (doan<random)
        {
            printf("Lon hon!\n");
        }
        else if (doan>random)
        {
            printf("Nho hon!\n");
        }
        else
        {
            printf("Chuc mung! Ban da doan dung\n");
            break;
        }
    }
    return 0;
}
