// program który dostaje a i b.
//obliczamy x
// wzor: ax =b -> x = b/a
//uwzględnić dzielenie przez zero!

#include <stdio.h>

int main() { 
    int a, b;

    printf("Podaj a: \n");
    scanf("%d", &a);

    printf("Podaj b: \n");
    scanf("%d", &b);

    if(a == 0) printf("Nie można dzielić przez zero!");
    else {
        float x = (float)b/a;
        printf("X wynosi: %f", x);
    }
}