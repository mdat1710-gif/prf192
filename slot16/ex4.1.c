#include <stdio.h>

int main()
{
    int a[100], n;

    printf("Nhap so phan tu: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Mang dao nguoc: ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}