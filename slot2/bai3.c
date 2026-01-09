#include <stdio.h>

int main() {
    // Khai bao 1 bien so thuc a, b va khoi tao gia tri
    float a = 3;
    float b = 2.5;

    // Khai bao bien kq la ket qua cua a + b
    float kq = a + b;

    // In a
    printf("Gia tri cua a = %.0f\n", a);

    // In b
    printf("Gia tri cua b = %.2f\n", b);

    // In ket qua: kq
    printf("Tong a + b = %.2f", kq);

    return 0;
}