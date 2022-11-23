//program ktory rysuje
//   x
//  xx
// xxx
//xxxx

#include <stdio.h>

int main() {
    int wysokosc;

    printf("Podaj wysokosc wiezy: \n");
    scanf("%d", &wysokosc);

    for(int j = wysokosc - 1; j >= 0; j--)
    {
        for(int i = j; i >= 0; i --)
        {
            printf(" ");
        }

        for(int k = wysokosc - j; k > 0; k--)
        {
            printf("x");
        }

        printf("\n");
    }

    return 0;
}