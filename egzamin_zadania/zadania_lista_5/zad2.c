//Napisz program, który wczytuje osiem liczb zmiennoprzecinkowych (typu double)
// do tablicy, anastepnie wyświetla je w odwrotnej kolejności.
#include <stdio.h>
#define Rozmiar 8


int main(void) {
    double tab[Rozmiar];

    for(int i = 0; i < Rozmiar; i++)
    {
        printf("Podaj %d element tablicy: \n", i+1);
        scanf("%lf", &tab[i]);
    }

    for(int j = Rozmiar - 1; j >= 0; j--)
    {
        printf("Element %d : %lf \n", j + 1, tab[j]);
    }

    return 0;
}