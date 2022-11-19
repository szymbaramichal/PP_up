

#include <stdio.h>

int main() {
    int n = 5;
    float suma = 0.0f;
    int k = 1;
    while(k <= n)
    {
        suma += (double) 1/k;
        ++k; 
    }

    printf("%f", suma);
    
    return 0;
}