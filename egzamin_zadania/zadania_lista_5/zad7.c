//Zaprojektuj i napisz funkcje, która przesunie liczby w tablicy o jedno miejsce
//tzn. pierwszy element przestawi na ostatnia pozycje, drugi na pierwsza, trzeci na druga
//pozycje itd.. Przetestuj funkcje w prostym programie.

#include <stdio.h>
#define Rozmiar 8


void przestaw_tablice(int *);

int main(void) {
    int tab[Rozmiar] = {1, 2, 3, 4, 5, 6, 7, 8};

    przestaw_tablice(tab);

    return 0;
}


void przestaw_tablice(int *tab)
{
    int temp = tab[0];
    
    for(int i = 0; i < Rozmiar -1; i++)
    {
        tab[i] = tab[i+1];
    }

    tab[Rozmiar - 1] = temp;

    for(int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }
}