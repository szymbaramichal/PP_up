#include <stdio.h>

int main() {
    FILE *plik = fopen("LICZBY.TXT", "r");
    if(plik == NULL) {
        printf("PRINTF");
        return 0;
    }

    int x;
    while(fscanf(plik, "%d", &x) ==1) printf("%d \n", x);
    fclose(plik);
    return 0;
}
