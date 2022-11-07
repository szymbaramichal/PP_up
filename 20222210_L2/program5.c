#include <stdio.h>

//Bez funkcji

// int main()
// {
//     int liczba, sumaDzielnikow = 0;

//     printf("Podaj liczbe, aby zobaczyc jej sume dzielnikow: ");
//     scanf("%d", &liczba);

//     for(int i = 1; i <= liczba; i++)
//     {
//         if(liczba % i == 0)
//         {
//             printf("Liczba %d jest dzielnikiem \n", i);
//             sumaDzielnikow += i;
//         }
//     }
    
//     printf("Suma dzielnikow: %d", sumaDzielnikow);
// }






//Z funkcja

int main()
{
    int liczba;

    printf("Podaj liczbe, aby zobaczyc jej sume dzielnikow: ");
    scanf("%d", &liczba);
    
    WyswietlDzielnikiLiczby(liczba);
}

void WyswietlDzielnikiLiczby(int liczba)
{
    int sumaDzielnikow = 0;
    for(int i = 1; i <= liczba; i++)
    {
        if(liczba % i == 0)
        {
            printf("Liczba %d jest dzielnikiem \n", i);
            sumaDzielnikow += i;
        }
    }

    printf("Suma dzielnikow: %d", sumaDzielnikow);
}