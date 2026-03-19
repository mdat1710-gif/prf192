#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    fgets(chuoi, sizeof(chuoi), stdin);
   int so_tu = 0;
    int trong_tu = 0; 
    
    int i = 0;
    while (chuoi[i] != '\0') {
        if (chuoi[i] == '\n') {
            chuoi[i] = '\0';
            break;
        }
        if (chuoi[i] != ' ' && chuoi[i] != '\t') {
            if (trong_tu == 0) {
                trong_tu = 1;
                so_tu++;
            }
        } else {
            trong_tu = 0;
        }
        i++;
    }
    
    printf("OUTPUT:\n");
    printf("%d\n", so_tu);
    
    return 0;
}
