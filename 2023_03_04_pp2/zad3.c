#include <stdio.h>

struct str
{
    int x;
    struct str *p1;
    struct str *p2;
};


int main() {
    struct str *p;
    p = malloc(sizeof(struct str));
    p->x = 3;
    p->p1 = malloc(sizeof(struct str));
    p->p1->x = 2;
    p->p1->p1....


    return 0;
}

//petla na wyszukanie wartosci w tablicy struktur