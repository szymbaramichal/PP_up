#include <stdio.h>

struct wezel {
    int x;
    struct wezel *p;
}

int main() {
    struct wezel *q;
    q = malloc(sizeof(struct wezel));
    q->x = 1;
    q-> p = malloc(sizeof(struct wezel));
    q->p->x = 2;
    q->p->p = malloc(sizeof(struct wezel));
    q->p->p->x = 3;
    q->p->p->p = NULL;
}

void f (struct wezel *q) {
    while(q) {
        printf("%d\n", q->x);
        q = q->p;
    }
}