#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEN_FILE "products.bin"

typedef struct {
    int ma_san_pham;
    char ten_san_pham[50];
    float gia;
    int so_luong;
} SanPham;

// nhap san pham
void nhapSanPham(SanPham *sp) {
    printf("Nhap ma san pham: ");
    scanf("%d", &sp->ma_san_pham);
    getchar();

    printf("Nhap ten san pham: ");
    fgets(sp->ten_san_pham, sizeof(sp->ten_san_pham), stdin);
    sp->ten_san_pham[strcspn(sp->ten_san_pham, "\n")] = 0;

    printf("Nhap gia: ");
    scanf("%f", &sp->gia);

    printf("Nhap so luong: ");
    scanf("%d", &sp->so_luong);
}

// ghi de sp
void ghiDeSanPham() {
    FILE *f = fopen(TEN_FILE, "wb");
    if (f == NULL) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    SanPham sp;//lap nhap n san pham
    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);
        nhapSanPham(&sp);
        fwrite(&sp, sizeof(SanPham), 1, f);
    }

    fclose(f);
    printf("Ghi de thanh cong!\n");
}

// them
void themSanPham() {
    FILE *f = fopen(TEN_FILE, "ab");
    if (f == NULL) {
        printf("Loi mo file!\n");
        return;
    }

    int n;
    printf("Nhap so luong san pham muon them: ");
    scanf("%d", &n);

    SanPham sp;
    for (int i = 0; i < n; i++) {
        printf("\nSan pham %d:\n", i + 1);
        nhapSanPham(&sp);
        fwrite(&sp, sizeof(SanPham), 1, f);
    }

    fclose(f);
    printf("Them thanh cong!\n");
}

// doc
void docSanPham() {
    FILE *f = fopen(TEN_FILE, "rb");
    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return;
    }

    SanPham sp;

    printf("\n%-10s %-25s %-10s %-10s\n", "Ma", "Ten", "Gia", "SL");
    printf("-------------------------------------------------------------\n");

    while (fread(&sp, sizeof(SanPham), 1, f) == 1) {
        printf("%-10d %-25s %-10.2f %-10d",
               sp.ma_san_pham, sp.ten_san_pham, sp.gia, sp.so_luong);
        printf("\n");
    }

    fclose(f);
}

// sua
void suaSanPham() {
    FILE *f = fopen(TEN_FILE, "rb+");
    if (f == NULL) {
        printf("Khong tim thay file!\n");
        return;
    }

    int ma, tim_thay = 0;
    SanPham sp;

    printf("Nhap ma san pham can sua: ");
    scanf("%d", &ma);

    while (fread(&sp, sizeof(SanPham), 1, f)) {
        if (sp.ma_san_pham == ma) {
            printf("Tim thay! Nhap thong tin moi:\n");

            printf("Nhap ten moi: ");
            getchar();
            fgets(sp.ten_san_pham, sizeof(sp.ten_san_pham), stdin);
            sp.ten_san_pham[strcspn(sp.ten_san_pham, "\n")] = 0;

            printf("Nhap gia moi: ");
            scanf("%f", &sp.gia);

            printf("Nhap so luong moi: ");
            scanf("%d", &sp.so_luong);

            fseek(f, -sizeof(SanPham), SEEK_CUR);
            fwrite(&sp, sizeof(SanPham), 1, f);

            tim_thay = 1;
            printf("Cap nhat thanh cong!\n");
            break;
        }
    }

    if (!tim_thay) {
        printf("Khong tim thay san pham!\n");
    }

    fclose(f);
}

// menu
int main() {
    int lua_chon;

    do {
        printf("\n===== QUAN LY SAN PHAM =====\n");
        printf("1. Ghi de san pham\n");
        printf("2. Them san pham\n");
        printf("3. Doc san pham\n");
        printf("4. Sua san pham\n");
        printf("0. Thoat\n");
        printf("Chon: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1:
                ghiDeSanPham();
                break;
            case 2:
                themSanPham();
                break;
            case 3:
                docSanPham();
                break;
            case 4:
                suaSanPham();
                break;
            case 0:
                printf("Thoat chuong trinh...\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (lua_chon != 0);

    return 0;
}