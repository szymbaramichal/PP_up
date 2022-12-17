#include <stdio.h>

int main () {
    int array[] = {3, 4, 2, 7, 5};

    int num;
    int found = 0;

    printf("Podaj liczbe ktorej szukasz \n");
    scanf("%d", &num);

    for(int i = 0; i < sizeof(array); i++)
    {
        if(array[i] == num)
        {
            printf("Index liczby wynosi: %d", i);
            found = 1;
        }
    }

    if(!found)
    {
        printf("Nie znaleziono liczby w tablicy");
    }

}