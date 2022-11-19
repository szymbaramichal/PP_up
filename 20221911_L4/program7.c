#include <stdio.h>

int main() {
    int x = 3, y = 7;
    int *p = &x;

    printf("x = %d p= %d \n", x, *p);

    x = 8;
    printf("x= %d p = %d \n", x, *p);

    *p = 6;
    printf("x= %d p = %d \n", x, *p);
}