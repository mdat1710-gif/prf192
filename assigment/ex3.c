#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct {
    int id;
    char name[100];
    float score;
} SinhVien;

int main(){
    FILE *fp;
    SinhVien sv;

    printf("Nhap id: ");
    scanf("%d", &sv.id);
    getchar(); 

    printf("Nhap ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);

    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap diem: ");
    scanf("%f", &sv.score);

   
    fp = fopen("baitap3.txt", "w");
    if(fp == NULL){
        printf("ERROR!");
        return 0;
    }
    fprintf(fp, "%d, %s, %.1f", sv.id, sv.name, sv.score);
    fclose(fp);
    printf("\nOUTPUT:\n");
    printf("%d, %s, %.1f", sv.id, sv.name, sv.score);
  
    return 0;
}