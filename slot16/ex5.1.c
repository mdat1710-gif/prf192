#include <stdio.h>

void swap3(int *a, int *b, int *c)
{
    int temp;
    temp = *a;   
    *a = *c;     
    *c = *b;     
    *b = temp;   
}
int main()
{
    int a,b,c;
    printf("Nhap 3 so: ");
    scanf("%d %d %d",&a,&b,&c);
    swap3(&a,&b,&c);
    printf("\nSau khi hoan doi:\n");
    printf("%d %d %d",a,b,c);
    return 0;
}