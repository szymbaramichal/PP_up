#include <stdio.h>

int main() {
    int a = 2;
    siedem(&a);
    printf("%d \n", a);
}

void siedem(int *p)
{
    *p = 7;
} 