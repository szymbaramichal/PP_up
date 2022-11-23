//Oblicz pole trójkąta 
// float pole(float h, float a)
// float pole(float h, float *a)

#include <stdio.h>

float pole_bez_wskaznika(float h, float a)
{
    return 0.5f * a * h;
}

void pole_wskaznik(float h, float *a)
{
    *a = *a * 0.5f * h;
}

int main() {
    float h, a;

    printf("Podaj dlugosc podstawy: \n");
    scanf("%f", &a);

    printf("Podaj wysokosc: \n");
    scanf("%f", &h);

    float pole = pole_bez_wskaznika(h, a);

    printf("-----BEZ WSKAZNIKOW----- \n ");
    printf("Pole wynosi: %f \n", pole);

    pole_wskaznik(h, &a);
    
    printf("-----PO UZYCIU METODY pole_wskaznik----- \n ");
    printf("Pole po uzyciu metody wynosi: %f", a);

    return 0;
}