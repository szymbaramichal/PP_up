//program ktory oblicz wspolrzedne x i y po poradniu r i alfa
//x = rcos alfa
//y = r sin alfa

#include <stdio.h>
#include <math.h>

void count_X_and_Y(float r, float alpha, float *px, float *py) {
    *px = r * cos(alpha);
    *py = r * sin(alpha);
}

int main() {
    float r,alpha,px,py;

    printf("Podaj r: \n");
    scanf("%f", &r);
    
    printf("Podaj miare kata alfa: \n");
    scanf("%f", &alpha);

    count_X_and_Y(r, alpha, &px, &py);

    printf("Punkt x: %f \n", px);   
    printf("Punkt y: %f \n", py);   
}