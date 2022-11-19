#include <stdio.h>

int main() {
    int a, b;
    a = f1(2,5);
    printf("%d\n", a);
    
    f2(2,5,&b);
    printf("%d\n", b);
}

int f1(int x, int y)
{
    return x*x + y+y;
} 

void f2(int x, int y, int *p)
{
    *p = x*x + y+y;
} 