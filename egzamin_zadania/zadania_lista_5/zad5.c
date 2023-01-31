// Zaprojektuj i napisz funkcje, która znajdzie najwiekszy i najmniejszy element
// w tablicy i zamieni je miejscami. Przetestuj funkcje w prostym programie.

#include <stdio.h>
#define Rozmiar 7

void zamien_min_max(int *);

int main(void) {
    int tab[Rozmiar] = {1,2,3,4,5,6,7};

    zamien_min_max(tab);

    return 0;
}

void zamien_min_max(int *tab) 
{
    int min = tab[0];
    int minIndex = 0;

    int max = tab[0];
    int maxIndex = 0;

    for (int i = 1; i < Rozmiar; i++)
    {
        if(tab[i] > max)
        {
            max = tab[i];
            maxIndex = i;
            continue;
        }

        if(tab[i] < min)
        {
            min = tab[i];
            minIndex = i;
        }
    }

    tab[minIndex] = max;
    tab[maxIndex] = min;

    for (int i = 0; i < Rozmiar; i++)
    {
        printf("%d ", tab[i]);
    }
    
}