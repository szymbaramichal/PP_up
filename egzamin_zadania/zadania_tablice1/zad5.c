#include <stdio.h>

void najwieksza_para(float *tablica, int *pierwszyIndex) 
{ 
    int i = 0;
    float suma = tablica[i] + tablica[i + 1];
    float suma2 = 5.5f;
    
    float *sumaWsk = &suma;
    sumaWsk = &suma2;

    if(suma > 5.5f)
        printf("chuj");

    if(suma > 5.5f)
    {
        printf("chuj");        
    }   

    for (size_t i = 0; i < 5; i++)
    {
        printf("chuj");        
    }

    for (size_t i = 0; i < 5; i++)
        printf("chuj");        
        printf("chuj");        
        
     

    *pierwszyIndex = 0;
    for(i = 1; i < sizeof(tablica) / sizeof(tablica[0]); i++)
    {
        if(tablica[i] + tablica[i + 1] > suma)
        {
            suma = tablica[i] + tablica[i + 1];
            *pierwszyIndex = i;
        }
    }
}


int main() {
    float tablica[] = {1.0, 2.0, 33.0, 1.0, 17.0, 11.0, 144.0, 156.0};
    int pierwszyIndex;

    najwieksza_para(tablica, &pierwszyIndex);

    printf("%d", pierwszyIndex);


    return 0;
}