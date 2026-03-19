#include <stdio.h>

int main() {
    char chuoi[1000] = "";
    
    printf("INPUT:\n");
    // Doc chuoi bao gom ca khoang trang
    fgets(chuoi, sizeof(chuoi), stdin);
    
    int do_dai = 0;
    // Tim chiem do dai cua chuoi thu cong
    while (chuoi[do_dai] != '\0') {
        // Loai bo ky tu xuong dong o cuoi
        if (chuoi[do_dai] == '\n') {
            chuoi[do_dai] = '\0';
            break;
        }
        do_dai++;
    }
    
    printf("OUTPUT:\n");
    // In ra chuoi theo thu tu dao nguoc
    for (int i = do_dai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");
    
    return 0;
}
