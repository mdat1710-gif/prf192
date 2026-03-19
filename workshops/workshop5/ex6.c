#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char danh_sach[10][100];
    
    printf("INPUT:\n");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%99s", danh_sach[i]);
    }
    
    char tam[100]; 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(danh_sach[i], danh_sach[j]) > 0) {
                strcpy(tam, danh_sach[i]);
                strcpy(danh_sach[i], danh_sach[j]);
                strcpy(danh_sach[j], tam);
            }
        }
    }
    
    printf("\nOUTPUT:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", danh_sach[i]);
    }
    
    return 0;
}
