// Napisz funkcję, która otrzymuje jako argumenty tablicę dwuwymiarową o elementach typu int oraz jej wymiary 
//i odwraca kolejność elementów we wszystkich wierszach otrzymanej tablicy. Przetestuj funkcję w prostym programie
#include <stdio.h>
#define W 2
#define K 5

void odwroc(int[W][K], int, int);

int main(void) {
    int tab[W][K] = {{1,2,3,4,5}, {7,8,9,10,11}};

    odwroc(tab, W, K);

    for(int i = 0; i < W; i++)
    {
        for(int j = 0; j < K; j++)
        {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void odwroc(int tab[W][K], int w, int k)
{
    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < (k / 2); j++)
        {
            int temp = tab[i][j];
            tab[i][j] = tab[i][k - 1 -j];
            tab[i][k - 1 -j] = temp;
        }
    }
}