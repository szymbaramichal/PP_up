//Uzytkownik podaje ile chce wprowadzic liczb
//Wprowadza te liczby
//Program zwraca najwi�ksz�

#include <stdio.h>

int main()
{
	int x, iloscLiczb, maxNum;
	printf("podaj ilosc liczb: \n");
	scanf("%d", &iloscLiczb);
    
    for(int i=1; i <= iloscLiczb; i++)
    {
        printf("podaj %d liczbe: \n", i);
	    scanf("%d", &x);
        maxNum = (x > maxNum) ? x : maxNum;   
    }
	printf("Najwieksza liczba jest %d", maxNum);

    return 0;
}