#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    printf("Nhap chuoi: ");
    gets(a);
    int n = strlen(a);
	printf("Chuoi dao nguoc: ");
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}