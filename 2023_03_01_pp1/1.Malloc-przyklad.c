#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;				//
	int x = 5;			//
	p = &x;				// To wszystko w sumie nie wa�ne
	printf("%d\n",*p);	// Zdobys�aw jakie� przyk�ady sobie pisa�
	*p=7;				// Powt�rka ze wka�nik�w po prostu
	printf("%d\n",*p);	//
	
	int t[6];			// To te� nie wa�ne 
	p=t;				//
	
	p=(int)malloc(5*sizeof(int)); // tu masz wreszcie malloc,
	return(0);					  // 	Przypisujesz do wska�nika, bo malloc zwraca wska�nik
								  // do pierwszego elementu nowego obszaru pami�ci.
								  // 	Rozmiar tego obszaru to jest 5 int�w, wi�c w sumie
								  // to p jest wska�nikiem do 5-elementowej tablicy int�w
}
