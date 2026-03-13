#include <stdio.h>

int main()
{
    int a[100], n;
    int *p;

    printf("Nhap so phan tu: ");
    scanf("%d",&n);

    p = a;   // p tro den mang a

    for(int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",(p+i));
    }

    printf("Mang dao nguoc: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }

    return 0;
}