//Napisz, program, w którym deklarowana jest tablica o wymiarach N × N typu
//double. Wykorzystaj funkcję complete array() do wypełnienia liczbami pseudolosowymi. Zaprojektuj funkcję show array(), 
//która zajmie się wyświetleniem tablicy – funkcja powinna wyświetlać N wierszy, w których jest po N liczb. Napisz:
//• funkcję, która wyzeruje liczby umieszczone na głównej przekątnej tablicy;
//• funkcję, która wyznaczy sumę liczb umieszczonych na głównej przekątnej tablicy oraz
//zwróci tę sumę;
//• funkcję, która wyznaczy sumę liczb umieszczonych w i-tym wierszu tablicy (numer
//wiersza podany jako argument funkcji) i zwróci tę sumę (za pomocą tej funkcji wyświetl
// sumy liczb kolejnych wierszy tablicy);
// • funkcję, która wyznaczy sumę liczb umieszczonych w i-tej kolumnie tablicy (
//numer kolumny podany jako argument funkcji) i zwróci tę sumę (za pomocą tej funkcji wyświetl
// sumy liczb kolejnych kolumn tablicy);
// • funkcję, która w tablicy zamieni elementy i-tego wiersza z j-tym (numery wierszy podane jako argumenty funkcji);
// 1
// • funkcję, która w tablicy znajdzie element najmniejszy (największy) i wyzeruje kolumnę
// i wiersz w którym on się znajduje;
// • funkcję, która transponuje tablicę (zamieni wiersze z kolumnami);
// • funkcję, która wyzeruje w tablicy wszystkie elementy leżące pod (lub nad)
// główną przekątną.
// Każda z powyższych funkcji powinna m.in. jako argumenty przyjmować tablicę i jej wymiar
#include <stdio.h>
#define N 4

void complete_array(int [N][N]);
void show_array(int [N][N]);

//pp 1
void zeruj_na_przekatnej(int [N][N]);

//pp2
int suma_przekatnej(int [N][N]);

//pp3
int suma_liczb_w_wierszu(int [N][N], int);

//pp4
int suma_liczb_w_kolumnie(int [N][N], int);

//pp5
void zamien_liczby_wierszy(int [N][N], int, int);

//pp6
void zeruj_max(int [N][N]);

int main(void) {
    int tab[N][N];

    complete_array(tab);
    show_array(tab);
    
    zeruj_max(tab);

    show_array(tab);

    return 0;
}

void complete_array(int tab[N][N]) {
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            tab[i][j] = rand()%500 + -500;
        }
    }
}

void show_array(int tab[N][N]) {
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d ", tab[i][j]);
        }

        printf("\n");
    }
}

void zeruj_na_przekatnej(int tab[N][N]) {
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i == j)
                tab[i][j] = 0;
        }
    }
}

int suma_przekatnej(int tab[N][N]) {
    int suma = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(j == i)
                suma += tab[i][j];
        }
    }

    return suma;
}

int suma_liczb_w_wierszu(int tab[N][N], int i) {
    int sumaWierszaDoZwrocenia;
    
    for (int j = 0; j < N; j++)
    {
        int sumaWiersza = 0;
        for(int k = 0; k < N; k++)
        {
            sumaWiersza += tab[j][k];
        }   

        if(i - 1 == j)
            sumaWierszaDoZwrocenia = sumaWiersza;
        else    
            printf("Suma %d wiersza wynosi: %d \n", j + 1, sumaWiersza);
    }
    
    return sumaWierszaDoZwrocenia;
}

int suma_liczb_w_kolumnie(int tab[N][N], int i) {
    int sumaKolumnyDoZwrocenia;

    for(int j = 0; j < N; j++)
    {
        int sumaKolumny = 0;
        for(int k = 0; k < N; k++)
        {
            sumaKolumny += tab[k][j];
        }

        if(j == i - 1)
            sumaKolumnyDoZwrocenia = sumaKolumny;
        else
            printf("Suma %d kolumny wynosi: %d \n", j + 1, sumaKolumny);
    }

    return sumaKolumnyDoZwrocenia;

}

void zamien_liczby_wierszy(int tab[N][N], int wiersz1, int wiersz2) {
    for(int i = 0; i < N; i++)
    {
        int temp = tab[wiersz1 - 1][i];
        tab[wiersz1 - 1][i] = tab[wiersz2 - 1][i];
        tab[wiersz2 - 1][i] = temp;
    }
}

void zeruj_max(int tab[N][N]) { 
    int maxNum = tab[0][0], maxNumWiersz = 0, maxNumKolumna = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(tab[i][j] > maxNum)
            {
                maxNum = tab[i][j];
                maxNumKolumna = j;
                maxNumWiersz = i;
            }
        }
    }

    for(int k = 0; k < N; k++)
    {
        tab[maxNumWiersz][k] = 0;
        tab[k][maxNumKolumna] = 0;
    }
}