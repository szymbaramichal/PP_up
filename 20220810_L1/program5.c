//Program przyjmuje 2 liczby, k i n
//Oblicz k do pot�gi n

#include <stdio.h>

int main()
{
    int k, n, sum = 1;

    printf("Podaj liczbe k: ");
    scanf("%d", &k);

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum * k;
    }

    printf("Suma wynosi: %d", sum);
}
