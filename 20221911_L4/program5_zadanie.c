//Funkcja zwaracająca największą cyfrę z liczby
#include <stdio.h>

int main() {
    int liczba, max = 0;
    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);

    while(liczba > 0) { 
        int temp = liczba % 10;
        max = max < temp ? temp : max;

        liczba /= 10;
    }

    printf("Największą cyfrą z liczby jest: %d", max);
    
    return 0;
}