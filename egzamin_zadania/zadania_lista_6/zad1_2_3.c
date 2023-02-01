//zadanie 1
// Napisz, program, w którym deklarowana jest tablica o wymiarach 10 na 15 typu int.
//Wykorzystaj funkcję complete array() do wypełnienia tablicy losowymi liczbami całkowitymi
//z przedziału od −500 do 500. Zaprojektuj funkcję show array(), która zajmie się wyświetleniem
//tablicy – funkcja powinna wyświetlać 10 wierszy, w których jest po 15 liczb.

//zadanie 2
// Uzupełnij program z zadania 1 o deklaracje drugiej tablicy tego samego rozmiaru
//i typu oraz funkcję new array(), która uzupełni drugą tablicę kolejnymi kwadratami elementów pierwszej tablicy.

//zadanie 3
//Uzupełnij program, z zadań 1 i 2 o funkcję find max(), która ma zwracać maksymalny element przechowywany w tablicy. 
//Wypisz maksymalne elementy obu tablic.

#include <stdio.h>
#include <math.h>
#define W 10
#define K 15

//Zadanie 1
void complete_array(int [W][K]);
void show_array(int [W][K]);

//Zadanie2
void new_array(int [W][K], int [W][K]);

//zadanie3
int find_max(int [W][K]);

int main(void) {
    int tab[W][K];
    int newTab[W][K];

    complete_array(tab);
    show_array(tab);

    new_array(tab, newTab);

    int max1 = find_max(tab);
    int max2 = find_max(newTab);

    printf("Maksymalny element pierwszej tablicy: %d \n", max1);
    printf("Maksymalny element drugiej tablicy: %d", max2);

    return 0;
}

void complete_array(int tab[W][K])
{
    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            tab[i][j] = rand()%500+ -500;
        }
    }
}

void show_array(int tab[W][K])
{
    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
}

void new_array(int tab1[W][K], int newTab[W][K])
{
    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            newTab[i][j] = pow(tab1[i][j],2);
        }
    }
}

int find_max(int tab[W][K])
{
    int maxSuma = tab[0][0];
    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            if(tab[i][j] > maxSuma)
                maxSuma = tab[i][j];
        }
    }

    return maxSuma;
}