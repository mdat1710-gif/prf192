#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    printf("Nhap x y: ");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("Sau khi hoan doi:\n");
    printf("%d %d",x,y);
    

    return 0;
}