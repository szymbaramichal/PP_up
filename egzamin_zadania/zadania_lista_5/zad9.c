//Zaprojektuj i napisz funkcje, która wymnoży wszystkie elementy tablicy
//przez dana liczbe. Tablica (wskaźnik do pierwszego elementu) i liczba powinny być
//przekazane jako parametry funkcji. Przetestuj funkcje w prostym programie.

#include <stdio.h>
#define Rozmiar 8

void przemnoz_tablice_przez(int *, int);

int main(void) {
    int tab[Rozmiar] = {1,2,3,4,5,6,7,8};

    przemnoz_tablice_przez(tab, 9);

    for (int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}

void przemnoz_tablice_przez(int *tab, int liczba)
{
    for (int i = 0; i < Rozmiar; i++)
    {
        tab[i] *= liczba;
    }
}