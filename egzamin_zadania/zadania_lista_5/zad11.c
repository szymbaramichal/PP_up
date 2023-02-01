//Zaprojektuj i zdefiniuj funkcje, która posortuje dane w tablicy (metoda
//babelkowa lub przez wybór elementu minimalnego). Przetestuj funkcje na tablicy o stu
//elementach generowanych losowo (losowe liczby od −1000 do 1000) - za wypełnianie
//tablicy odpowiednimi wartościami powinna odpowiadać osobna funkcja.

#include <stdio.h>
#include <stdlib.h>
#define Rozmiar 10

void bubble_sort(int *);
void generuj_wartosci_tablicy(int *, int); 
int main(void) {
    int tab[Rozmiar];

    generuj_wartosci_tablicy(tab, Rozmiar);

    for (int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("\n");
    
    bubble_sort(tab);

    for (int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}

void bubble_sort(int *tab)
{
    for(int i = 0; i < Rozmiar; i++)
    {
        for(int j = 0; j < Rozmiar - i; j++)
        {
            if(tab[j] > tab[j+1])
            {
                int temp = tab[j+1];
                tab[j+1] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void generuj_wartosci_tablicy(int *tab, int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
    {
        tab[i] = rand()% 1000 + -10;
    }
}
