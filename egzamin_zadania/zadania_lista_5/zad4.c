//Napisz funkcję, która otrzymuje jako argumenty tablicę dwuwymiarową o elementach 
//typu int oraz jej wymiary i odwraca kolejność elementów we wszystkich wierszach otrzymanej tablicy. 
//Przetestuj funkcję w prostym programie.
#include <stdio.h>
#define Rozmiar 5

int ile_liczb_podzielnych_przez(int *, int);

int main(void) {
    int tab[Rozmiar] = {33, 20, 11, 0, 3};
    int k = 11;
    int wynik = ile_liczb_podzielnych_przez(tab, k);
    printf("Liczb podzielnych przez %d w tablicy jest: %d", k, wynik);
    return 0;
}

int ile_liczb_podzielnych_przez(int *tab, int k)
{
    //zmienna wartosciowa, domyślnie ma wartość 0
    int suma;
    for(int i = 0; i < Rozmiar; i++)
    {
        if(tab[i] % k == 0)
            suma++;
    }    

    return suma;
}