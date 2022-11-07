#include <stdio.h>

int potega(int x, int y){
    int sum = 1;

    for(int i = 1; i <= y; i++)
    {
        sum = sum * x;
    }
    return sum;
}

int main()
{
    int x, y;

    printf("Podaj liczbe x: ");
    scanf("%d", &x);

    printf("Podaj liczbe y: ");
    scanf("%d", &y);

    int wynik = potega(x, y);

    printf("Wynik wynosi %d", wynik);

    return 0;
}