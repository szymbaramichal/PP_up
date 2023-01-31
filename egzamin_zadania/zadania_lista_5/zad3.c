//Napisz program, w którym deklarowana jest 10-elementowa tablica liczb
//typu double. Zaprojektuj i wykorzystaj funkcje complete_array(), której zadaniem
//bedzie pobranie od użytkownika kolejnych liczb i zapisanie ich w kolejnych komórkach
//tablicy. Zaprojektuj funkcje print_array(), która zajmie sie wyświetleniem tablicy
#include <stdio.h>
#define Rozmiar 10

void complete_array(double *);
void print_array(double *);

int main(void) {
    double tab[Rozmiar];
    complete_array(tab);
    print_array(tab);
    return 0;
}

void complete_array(double *tab)
{
    for(int i = 0; i < Rozmiar; i++)
    {
        printf("Podaj %d element tablicy: \n", i+1);
        scanf("%lf", &tab[i]);
    }
}

void print_array(double *tab)
{
        for(int j = Rozmiar - 1; j >= 0; j--)
    {
        printf("Element %d : %.3lf \n", j + 1, tab[j]); // 3 liczby po kropce
    }
}