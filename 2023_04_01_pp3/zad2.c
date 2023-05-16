#include <stdio.h>

struct wezel {
    int liczba, licznik;
    struct wezel *lewy, *prawy;
};

struct wezel *wkorzen = NULL;

int main () {
    // wypisac od najmniejszej do najwiekszej
    //usunac wywolanie w funkcji pisz
    return 0;
}

struct wezel * nowy_wezel(int x)
{
    struct wezel *p;
    p = malloc(sizeof(struct wezel));
    p->licznik = 1;
    p->liczba = x;
    p->lewy = NULL;
    p->prawy = NULL;

    return p;
}

void dodaj_liczba(int x)
{
    if(wkorzen == NULL)
    {
        wkorzen = nowy_wezel(x);
        return;
    }

    struct wezel *p1, *p2;

    p1 = wkorzen;
    while(p1)
    {
        p2=p1;
        if(x>p1->liczba)
            p1 = p1->prawy;
        else if(x<p1->liczba)
            p1 = p1->lewy;
        else
        {
            ++p1->licznik;
            return;
        }
    }

    if(x >p2->liczba)
        p2->prawy = nowy_wezel(x);
    else
        p2->lewy = nowy_wezel(x);
}

//Zadanie domowe
void wypisz(struct wezel *p)
{
    if(p == NULL)
        return;
    wypisz(p->lewy);
    printf("%d\n", p->liczba);
    wypisz(p->prawy);
}

void free_w(struct wezel *p) 
{
    if(p == NULL)
        return;

    free_w(p->lewy);
    free_w(p->prawy);
    free_w(p);
}