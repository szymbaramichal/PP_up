#include <stdio.h>
#include <stdlib.h>

struct struktura{
    struct struktura *wskaznik1;
    int *wskaznik2;
    int **wskaznik3;
};

int main(void){
    struct struktura *p;
    int **p2, *p3;
    p = malloc(sizeof(struct struktura));
    p->wskaznik1 = malloc(sizeof(struct struktura));
    p->wskaznik2 = malloc(4*sizeof(int));
    p->wskaznik3 = malloc(4*sizeof(int*));
    for (int i = 0; i < 4; ++i) {
        p->wskaznik3[i] = p->wskaznik2+i;
        p->wskaznik2[i] = 3+2*i;
        printf("%d, ", *(p->wskaznik3[i]));
    }
    printf("\n");
    p->wskaznik1->wskaznik1 = NULL;
    p->wskaznik1->wskaznik2 = malloc(3*sizeof(int));
    p->wskaznik1->wskaznik3 = malloc(4*sizeof(int*));

    p->wskaznik1->wskaznik3[0] = NULL;

    p->wskaznik1->wskaznik3[1] = p->wskaznik1->wskaznik2;
    p->wskaznik1->wskaznik3[2] = p->wskaznik1->wskaznik2+1;
    p->wskaznik1->wskaznik3[3] = p->wskaznik1->wskaznik2+2;

    for (int i = 0, j = 6; i < 3; ++i, j--) {
        p->wskaznik1->wskaznik2[i] = j;
        printf("%d, ", *(p->wskaznik1->wskaznik3[i+1]));
    }
    printf("\n");
    p2 = p->wskaznik1->wskaznik3+3;
    p3 = p->wskaznik1->wskaznik2+2;
    printf("%d\n", **p2);
    printf("%d\n", *p3);

    free(p);
    free(p2);
    free(p3);

    return 0;
}
