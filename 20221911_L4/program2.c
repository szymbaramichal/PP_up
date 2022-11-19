#include <stdio.h>

int main() {
    int n, y=7, p=0;

    printf("Podaj liczbe ilosc x: \n");
    scanf("%d", &n);
    
    prostokat(n,y,p);
}

void prostokat(int n, int y, int p)
{
    while(p < 2)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" ");
        }
        
        for (int i = 0; i < y; i++)
        {
            printf("x");
        }
        
        printf("\n");
        p++;
    }
}
