#include <stdio.h>

void f(int *arrayOne, int *arrayTwo) {
    for(int i = 0; ; i++)
    {
        arrayTwo[i] = arrayOne[i];

        if(arrayOne[i] == 0) break;
    }
}

int main () {
    int arrayOne[] = {5,7,3,6,0,4,3};
    int arrayTwo[20];

    f(arrayOne, arrayTwo);

    for(int i = 0; i < sizeof(arrayTwo) / arrayTwo[0]; i++)
    {
        printf("%d", arrayTwo[i]);
    }
}