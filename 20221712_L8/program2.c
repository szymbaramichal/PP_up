#include <stdio.h>

struct punkt {
    float x;
    float y;
};

void czytaj_punkt(struct punkt *pkt) {
    printf("Podaj wspolrzedna X: \n");
    scanf("%f", &pkt->x);

    printf("Podaj wspolrzedna Y: \n");
    scanf("%f", &pkt->y);
}

void pisz_punkt(struct punkt *pkt) {
    printf("Wspolrzedne punkt to: X => %f, Y => %f \n", pkt->x, pkt->y);
}

int main() {
    struct punkt pkt;
    
    czytaj_punkt(&pkt);
    pisz_punkt(&pkt);

    return 0;
}