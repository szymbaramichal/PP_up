//Zaprojektuj i napisz funkcje, która policzy ile jest w tablicy liczb dodatnich,
//ujemnych i równych zero. Przetestuj funkcje w prostym programie.
#include <stdio.h>   
#define Rozmiar 8


void ilosc_liczb_ze_znakami(int[Rozmiar]);

int main(void) {
    int tab[Rozmiar] = {1, -213, 3, 2, 0, 0, 11111, 5555};
    
    ilosc_liczb_ze_znakami(tab);

    return 0;
}

void ilosc_liczb_ze_znakami(int tab[Rozmiar])
{
    int iloscDodatnich = 0;
    int iloscUjemnych = 0;
    int iloscZerowych = 0;

    for(int i = 0; i < Rozmiar; i++)
    {
        if(tab[i] > 0)
            iloscDodatnich++;
        else if(tab[i] < 0)
            iloscUjemnych++;
        else
            iloscZerowych++;
    }

    printf("Dodatnich: %d \nUjemnych: %d \nRownych zero: %d", iloscDodatnich, iloscUjemnych, iloscZerowych);
}