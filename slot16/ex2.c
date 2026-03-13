#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{
    c = tolower(c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return 1;
    return 0;
}

int countVowel(char *s)
{
    int count = 0;

    while(*s != '\0')   // duy?t d?n cu?i chu?i
    {
        if(isVowel(*s))
            count++;

        s++;   // tang con tr?
    }

    return count;
}

int main()
{
    char s[100];

    printf("Nhap chuoi: ");
    gets(s);

    int kq = countVowel(s);

    printf("So nguyen am: %d", kq);

    return 0;
}