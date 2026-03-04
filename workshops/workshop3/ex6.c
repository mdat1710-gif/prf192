#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game()
{
    int random, n;
    int i = 1;

    srand(time(NULL));
    random = rand() % 100 + 1;

    while (i <= 7)
    {
        printf("Lan %d - Moi ban doan (1-100): ", i);

        while (scanf("%d", &n) != 1 || n < 1 || n > 100)
        {
            printf("Nhap sai! Nhap lai: ");
            while (getchar() != '\n');
        }

        if (n < random)
            printf("Lon hon\n");
        else if (n > random)
            printf("Nho hon\n");
        else
        {
            printf("Dung roi!\n");
            return;   
        }

        i++;
    }

    printf("Ban da thua! So dung la: %d\n", random);
}

int main()
{
    play_game();   
    return 0;
}