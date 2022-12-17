#include <stdio.h>

struct punkt {
    float x,y;
};

struct punkt symOX(struct punkt pk) {
    pk.x = pk.x * -1;
    pk.y = pk.y * -1;
    return pk;  
}


int main() {
    struct punkt punkt1;
    punkt1.x = 5;
    punkt1.y = 3;

    punkt1 = symOX(punkt1);
    printf("%f %f", punkt1.x, punkt1.y);
}