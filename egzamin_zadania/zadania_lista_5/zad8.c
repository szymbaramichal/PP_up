//Zaprojektuj i napisz funkcje, która odwróci elementy (pierwszy zamieni z
//ostatnim, drugi z przedostatnim itd.) tablicy przekazanej jako argument funkcji. Przetestuj funkcje w prostym programie.

#include <stdio.h>
#define Rozmiar 7


void odwroc_tablice(int *);

int main(void) {
    int tab[Rozmiar] = {1,2,3,4,5,6,7};
    
    odwroc_tablice(tab);

    for(int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}

void odwroc_tablice(int *tab)
{
    for(int i = 0; i < (Rozmiar / 2); i++)
    {
        int temp = tab[i];
        tab[i] = tab[Rozmiar - 1 - i];
        tab[Rozmiar - 1 - i] = temp;
    }
}