//Tạo 1 file text "baitap2.txt", ghi một mảng vào file này
//Đọc nội dung ở file này, in ra màn hình console

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  
  FILE *fp;
  fp = fopen("baitap2.txt", "w");
  
  //Kiem tra thanh cong
  if(fp == NULL)
  {
  	printf("ERROR!");
  	return 0;
  }
  
  int n;
  printf("nhap n: ");
  scanf("%d", &n);
  fprintf(fp, "%d\n", n);
  
  int a[n];
  for(int i = 0; i < n; i++)
  {
  	scanf("%d", &a[i]);
  	fprintf(fp, "%d\t", a[i]);
  }

  //Dong file
  fclose(fp);
  //Doc file
  fp = fopen("baitap2.txt", "r");
  if(fp == NULL)
  {
  	printf("ERROR!");
  	return 0;
  }
  printf("Noi dung cua file:\n");
  int count;
  if(fscanf(fp, "%d", &count) != EOF)
  {
  	//in so luong phan tu:
  	printf("%d\n", count);
  	int value;
  	for(int i = 0; i < count; i++)
	{
		if(fscanf(fp, "%d", &value) != EOF)
		{
			printf("%d\t",value);
		}
	}
  }
  fclose(fp);
  return 0;
}