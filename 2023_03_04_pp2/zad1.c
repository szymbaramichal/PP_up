#include <stdio.h>

struct str  
{
    int num;
    int **tab;
};


int main() {
    struct str ** p1;
    int **p2;
    p1 = malloc(3 * sizeof(struct str*));
    p1[1] = NULL;
    p1[0] = malloc(sizeof(struct str));
    p1[2] = malloc(sizeof(struct str));
    p1[0]->num = 7;
    p1[2]->num = 4;
    p1[0]->tab = malloc(2*sizeof(int *));
    p1[2]->tab = malloc(3*sizeof(int *));
    p1[0]->tab[0] = NULL;
    p1[0]->tab[1] = NULL;
    p2 = p1[2]->tab;
    p2[0] = NULL;
    p2[1] = malloc(4*sizeof(int));
    p2[2] = malloc(3*sizeof(int));

    //Przypisanie wartości do komórek
}