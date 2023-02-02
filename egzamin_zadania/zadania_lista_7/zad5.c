//Punkt na płaszczyźnie można reprezentować za pomoc ˛a struktury
//zawieraj ˛acej dwie składowe typu float (współrz ˛edne punktu). Napisz funkcj ˛e, która:
//1. zwracaj ˛aca wartość 1, gdy punkt reprezentowany przez struktur ˛e przekazan ˛a jako argument leży nad osi ˛a OX oraz zero gdy punkt leży na osi lub pod osi ˛a OX;
//2. przekształci podany punkt w symetrii osiowej wzgl ˛edem osi OX;
//3. przekształci podany punkt w symetrii środkowej, wzgl ˛edem punktu P(0, 0);
//4. wczyta do tablicy (struktur) współrz ˛edne n punktów, a nast ˛epnie obliczy ile spośród podanych punktów leży nad osi ˛a OX;
//5. wczyta do tablicy (struktur) współrz ˛edne n punktów, a nast ˛epnie obliczy ile
//punktów leży w poszczególnych ćwiartkach układu współrz ˛ednych, punkty
//leż ˛ace na osiach należy policzyć oddzielnie
#include <stdio.h>
#define N 6

struct punkt {
    float x;
    float y;
};

//pp1
int czy_jest_nad_ox(struct punkt);

//pp2
void przeksztalc_oy(struct punkt *);

//pp3
void przeksztalc_wzgledem_poczatku(struct punkt *);

//pp4
int ile_wspolrzednych_nad_ox(int[N][2]);

//pp5
void ile_punktow_w_cwiartkach(int[N][2]);

int main(void) {
    int tab[N][2] = {{1,1}, {2,3}, {-1,1}, {-1, -1}, {1,-1}, {0, 100}};

    struct punkt pkt;
    pkt.x = 3;
    pkt.y = 4;

    return 0;
}

int czy_jest_nad_ox(struct punkt pkt) {
    if (pkt.y > 0)
        return 1;
    else return 0; 
}

void przeksztalc_oy(struct punkt *pkt) {
    pkt->y = -pkt->y;
}

void przeksztalc_wzgledem_poczatku(struct punkt *pkt) {
    pkt->x = -pkt->x;
    pkt->y = -pkt->y;
}

int ile_wspolrzednych_nad_ox(int wspolrzedne[N][2])
{
    int wynik;
    struct punkt pkty[N];

    for(int i = 0; i < N; i++)
    {
        struct punkt pkt;
        pkt.x = wspolrzedne[i][0];
        pkt.y = wspolrzedne[i][1];

        pkty[i] = pkt;

        if(pkt.y > 0)
            wynik++;
    }

    return wynik;
}

void ile_punktow_w_cwiartkach(int wspolrzedne[N][2]) 
{
    struct punkt pkty[N];
    int cw1 = 0;
    int cw2 = 0;
    int cw3 = 0;
    int cw4 = 0;
    int naX = 0;
    int naY = 0;

    for(int i = 0; i < N; i++)
    {
        struct punkt pkt;
        pkt.x = wspolrzedne[i][0];
        pkt.y = wspolrzedne[i][1];
        pkty[i] = pkt;
    }


    for(int j = 0; j < N; j++)
    {
        if(pkty[j].x > 0 && pkty[j].y > 0)
            cw1++;
        else if(pkty[j].x < 0 && pkty[j].y > 0)
            cw2++;
        else if(pkty[j].x < 0 && pkty[j].y < 0)
            cw3++;
        else if(pkty[j].x > 0 && pkty[j].y < 0)
            cw4++;
        else
        {
            if(pkty[j].x == 0)
                naY++;
            else
                naX++;
        }
    }

    printf("1sza: %d  2ga: %d  3cia: %d  4ta: %d  NaX: %d  NaY: %d \n", cw1,cw2,cw3,cw4,naX,naY);
}