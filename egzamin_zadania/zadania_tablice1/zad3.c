#include <stdio.h>

int index_liczby(int *tablica, int wartosc)
{
    //sizeof(tablica) / sizeof(tablica[0]) ==> ilosc elementów w tablicy
    for(int i = 0; i < sizeof(tablica) / tablica[0]; i++)
    {
        if(tablica[i] == wartosc)
        {
            return i;
        }
    }

    return -1;
}


int main() {

    int tablica[10] = {1,2,3,4,5,6,7,8,9,10};

    int index = index_liczby(tablica, 123);

    printf("Index szukanej wartosci to: %d", index);

    return 0;
}