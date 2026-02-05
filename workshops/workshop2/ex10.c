//ATM mo phong: Rut tien lien tuc cho den khi het tien hoac chon thoat

#include <stdio.h>

int nhapSoNguyen(char thongBao[], int dieuKienMin) {
    int x;
    printf("%s", thongBao);
    while (scanf("%d", &x) != 1 || x < dieuKienMin) {
        printf("Nhap sai! Vui long nhap so >= %d: ", dieuKienMin);
        while (getchar() != '\n');
    }
    return x;
}

int main() {
    int soDu = 5000;
    int rut, luaChon;

    printf("Chao mung ban den voi ATM!\n");
    printf("So du hien tai: %d\n", soDu);

    while (1) {
        luaChon = nhapSoNguyen(
            "\nBan co muon rut tien khong? (1: Co, 0: Thoat): ", 0
        );

        while (luaChon != 0 && luaChon != 1) {
            luaChon = nhapSoNguyen("Chi duoc nhap 1 hoac 0: ", 0);
        }

        if (luaChon == 0) {
            printf("Cam on ban da su dung dich vu. Tam biet!\n");
            break;
        }

        rut = nhapSoNguyen("Nhap so tien muon rut: ", 1);

        if (rut > soDu) {
            printf("That bai! So du khong du (Con: %d)\n", soDu);
        } else {
            soDu -= rut;
            printf("Rut tien thanh cong! So du con: %d\n", soDu);
        }

        if (soDu == 0) {
            printf("Tai khoan da het tien. Chuong trinh ket thuc!\n");
            break;
        }
    }

    return 0;
}

