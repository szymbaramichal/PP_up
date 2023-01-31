//Napisz program, w którym deklarowana jest 10-elementowa tablica typu
//int. Tablica powinna być inicjowana dowolnymi liczbami całkowitymi. 
//Program powinien wyświetlać elementy tablicy używajac petli. Użyj dyrektywy #define do określenia rozmiaru tablicy.
#include <stdio.h>
#define Rozmiar 10


int main(void) {
    int tab[Rozmiar] = {3,4,5,56,666,231,4,1241,444,10000};

    for(int i = 0; i < Rozmiar; i++)
    {
        printf("%d", tab[i]);
    }

    return 0;
}