//Program, ktory oblicza sume cyfr w liczbie

#include <stdio.h>

int main() {
    int liczba, suma;
    printf("Podaj liczbe: \n");
    scanf("%d", &liczba);

    while(liczba > 0) { 
        suma += liczba % 10;
        liczba /= 10;
    }

    printf("Suma cyfr w liczbie wynosi: %d", suma);
    
    return 0;
}