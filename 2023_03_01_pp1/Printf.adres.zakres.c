#include <stdio.h>
#include <stdlib.h>

// Zdobi chciał program kt�ry pobiera 2 adresy do tablicy
// Wypisuje wszystkie elementy mi�dzy jednym a drugim
// ale tylko jak podasz grzecznie pierszy adres przed drugim, a nie odwrotnie

void f(int* p1, int* p2);
int main(void)
{
	
	int tab[10]={0,1,2,3,4,5,6,7,8,9}; // przyk�adowa tablica �eby sprawdzi� czy dzia�a
		
	f(&tab[2],&tab[5]);				   // podaje na pr�be adresy do drugiego i pi�tego elementu
	
	return(0);
}

void f(int* p1, int* p2)			   // funkcja pobiera wska�niki(czyli w sumie adresy)
{
	while(p1<p2)					   // wykonuje si� p�ki wska�nik jeden jest mniejszy od dwa
									   // wa�ne �e por�wnujesz wska�niki(adresy),a nie warto�ci pod wska�nikami
	{
		printf("%d ",*p1++);		   // wy�wietla to co pod wka�nikiem
									   // wa�ne �e jak dasz *p++ do ++ jest zwi�ksza(przesuwa) wska�nik, a nie to co pod nim
	}
}
