//obliczanie wszystkich dzielnikow liczb

#include <stdio.h>

int main()
{
    int liczba;

    printf("Podaj liczbe aby zobaczyc jej dzielniki: ");
    scanf("%d", &liczba);

    for(int i = 1; i <= liczba; i++)
    {
        if(liczba % i == 0)
        {
            printf("Liczba %d jest dzielnikiem.", i);
        }
    }
}