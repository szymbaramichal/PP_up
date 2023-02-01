//Zaprojektuj i napisz funkcje:
//• wyznaczajaca sume dwóch n-elementowych wektorów (tablic n-elementowych
//typu double);
//• wyznaczajaca iloczyn skalarny dwóch n-elementowych wektorów (suma iloczynów odpowiadajacych sobie współrzednych).
//Przetestuj funkcje w prostym programie
#include <stdio.h>
#define N 10

void suma_tablic(double *, double *, double*);
double iloczyn_skalarny(double *, double *);

int main(void) {
    double tab1[N] = {1,2,3,4,5,6,7,8,9,10};
    double tab2[N] = {11,21,31,41,51,61,71,81,91,101};
    double summedTab[N];

    suma_tablic(tab1, tab2, summedTab);

    for(int i = 0; i < N; i++)
    {
        printf("Pierwsza tablica: %lf    Druga tablica: %lf    Trzecia tablica: %lf \n", tab1[i], tab2[i], summedTab[i]);
    }

    double iloczynSkalarny = iloczyn_skalarny(tab1, tab2);

    printf("Iloczyn skalarny wynosi: %lf", iloczynSkalarny);

    return 0;
}

void suma_tablic(double *tab1, double *tab2, double *summedTab)
{
    for(int i = 0; i < N; i++)
    {
        summedTab[i] = tab1[i] + tab2[i];
    }
}

double iloczyn_skalarny(double *tab1, double *tab2)
{   
    double suma;
    for(int i = 0; i < N; i++)
    {
        suma += tab1[i] * tab2[i];
    }

    return suma;
}