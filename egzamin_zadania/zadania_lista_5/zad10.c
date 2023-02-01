// Zaprojektuj i napisz funkcje szukajaca w danej n-elementowej tablicy typu
//int pary sasiednich elementów, których suma jest najwieksza. Funkcja jest typu void,
//a indeks pierwszego z elementów spełniajacych warunek ma być dostepny w miejscu
//wywołania funkcji.
#include <stdio.h>
#define Rozmiar 8

int najwieksza_para(int *);

int main(void) {
    int tab[Rozmiar] = {1,2,3,4,5,6,7,8};
    int index = najwieksza_para(tab);
    
    printf("Index pierwszego elementu z najwiekszej pary: %d", index);

    return 0;
}

int najwieksza_para(int *tab)
{
    int maxSuma = tab[0] + tab[1];
    int indexPierwszegoMax = tab[0];

    for(int i = 1; i < Rozmiar; i++)
    {
        if(tab[i] + tab[i + 1] > maxSuma)
        {
            maxSuma = tab[i] + tab[i + 1];
            indexPierwszegoMax = i;
        }
    }

    return indexPierwszegoMax;
}