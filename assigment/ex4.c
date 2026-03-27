#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[30];
    float grade;
};

int main() {
    int n;
    struct SinhVien ds[100];

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sv thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &ds[i].id);
        getchar(); 
        printf("Name: ");
        gets(ds[i].name);
        printf("Grade: ");
        scanf("%f", &ds[i].grade);
    }

    FILE *f = fopen("baitap4.txt", "w");
    if (f != NULL) {
        fprintf(f, "%d\n", n);
        for (int i = 0; i < n; i++) {
            fprintf(f, "%d\n", ds[i].id);
            fprintf(f, "%s\n", ds[i].name);
            fprintf(f, "%.1f\n", ds[i].grade);
        }
        fclose(f);
    }

    printf("\n--- Danh sach sinh vien vua nhap ---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Ho Ten", "Diem");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.1f\n", ds[i].id, ds[i].name, ds[i].grade);
    }

    return 0;
}