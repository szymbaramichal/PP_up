//obliczanie liczby dzielnikow

#include <stdio.h>

int main()
{
    int liczba, liczbaDzielnikow = 0;

    printf("Podaj liczbe aby zobaczyc jej dzielniki: ");
    scanf("%d", &liczba);

    for(int i = 1; i <= liczba; i++)
    {
        if(liczba % i == 0)
        {
            liczbaDzielnikow += 1;
        }
    }
    
    printf("Liczba dzielnikow: %d", liczbaDzielnikow);
}