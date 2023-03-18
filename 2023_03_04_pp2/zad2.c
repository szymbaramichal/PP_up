#include <stdio.h>

void f(int *p1, int *p2)
{
    while(1) {
        if(*p2 == 0)
        {
            break;
        }

        *p1 = *p2;
        p1++;
        p2++;
    }
}

int main() {
    int a[] = {24,2,41,34,444,0,23,14,57,87};
    int b[20];

    f(b, a);

    for(int i = 0; i < 20; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}