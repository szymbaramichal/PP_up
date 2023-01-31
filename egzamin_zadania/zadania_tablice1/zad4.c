#include <stdio.h>

void zeruj_elementy(int *tablica, int indexStart, int indexKoniec) 
{ 
    for(indexStart; indexStart <= indexKoniec; indexStart++)
    {
        tablica[indexStart] = 0;
    }
}

int main() {
    
    int tablica[] = {25, 50, 75, 100};
    int rozmiarTablicy = sizeof(tablica) / sizeof(tablica[0]);
    printf("%d ", rozmiarTablicy);


    for(int i = 0; i < rozmiarTablicy; i++)
    {
        printf("%d ", tablica[i]);
    }

    if(tablica[rozmiarTablicy -1] % 2 == 0)
    {
        zeruj_elementy(tablica, 0, rozmiarTablicy/2 -1);
    }

    return 0;
}