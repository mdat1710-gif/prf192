#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    fgets(chuoi, sizeof(chuoi), stdin);
    
    int so_chu_so = 0;
    int so_chu_cai = 0;
    int so_ky_tu_khac = 0;
    
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == '\n') {
            chuoi[i] = '\0';
            break;
        }
        
        if (chuoi[i] >= '0' && chuoi[i] <= '9') {
            so_chu_so++;
        }
        else if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            so_chu_cai++;
        }
        else {
            so_ky_tu_khac++;
        }
        i++;
    }
    
    printf("\nOUTPUT:\n");
    printf("%d\n", so_chu_so);
    printf("%d\n", so_chu_cai);
    printf("%d\n", so_ky_tu_khac);
    
    return 0;
}
