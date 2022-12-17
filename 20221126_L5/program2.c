#include <stdio.h>

void reverse(int *p1, int *p2) {
    int temp = *p1;

    *p1 = *p2;
    *p2 = temp; 
}

int main () {
    int p1 = 3, p2 =8;

    reverse(&p1, &p2);

    printf("P1: %d \nP2: %d", p1, p2);
}
