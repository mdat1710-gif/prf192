#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    char ky_tu_tim, ky_tu_thay_the;
    
    printf("INPUT:\n");
    scanf("%999s", chuoi);
    scanf(" %c", &ky_tu_tim);
    scanf(" %c", &ky_tu_thay_the);
    
    int so_lan_thay = 0;
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == ky_tu_tim) {
            chuoi[i] = ky_tu_thay_the;
            so_lan_thay++;
        }
        i++;
    }
    printf("\nOUTPUT:\n");
    printf("%d\n", so_lan_thay);
    printf("%s", chuoi);
    
    return 0;
}
