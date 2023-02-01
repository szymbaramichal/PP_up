//Napisz program, w którym deklarowana i inicjowana jest 3-elementowa tablica liczb typu int. 
//Zadeklaruj trzy zmienne wskaźnikowe typu int i „ustaw” je, tak
//aby wskazywały na adresy kolejnych komórek tablicy.
//Wykorzystujac zmienne wskaźnikowe zmodyfikuj elementy tablicy trzykrotnie zwiekszajac wartości, które sie tam
//znajduja. Wyświetl zmodyfikowana tablice
#include <stdio.h>
#define Rozmiar 3 

int main(void) {
    int tablica[Rozmiar] = {1,2,3}, *pierwsza = &tablica[0], *druga = &tablica[1], *trzecia = &tablica[2];
    *pierwsza *= 3;
    *druga *= 3;
    *trzecia *= 3;

    for (int i = 0; i < Rozmiar; i++)
    {
        printf("%d", tablica[i]);
    }
    
    return 0;
}