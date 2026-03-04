#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    int check;
    while (1) {
        printf("Nhap so trong khoang a va b: ");
        check = scanf("%d %d", &a, &b);
        if (check != 2) {
            printf("Nhap sai! Nhap lai\n");
            while (getchar() != '\n');
            continue;
        }
        if (a < 0 || b < 0) {
            printf("Nhap sai! Nhap lai\n");
            continue;
        }
        if (a > b) {
            printf("Yeu cau a <= b!\n");
            continue;
        }
        break;
    }

    printf("Cac so nguyen to trong khoang [%d, %d]:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0 && i != 2)
            continue;
        if (is_prime(i))
            printf("%d ", i);
    }

    return 0;
}