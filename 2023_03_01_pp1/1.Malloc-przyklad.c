#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;				//
	int x = 5;			//
	p = &x;				// To wszystko w sumie nie wa¿ne
	printf("%d\n",*p);	// Zdobys³aw jakieœ przyk³ady sobie pisa³
	*p=7;				// Powtórka ze wkaŸników po prostu
	printf("%d\n",*p);	//
	
	int t[6];			// To te¿ nie wa¿ne 
	p=t;				//
	
	p=(int)malloc(5*sizeof(int)); // tu masz wreszcie malloc,
	return(0);					  // 	Przypisujesz do wskaŸnika, bo malloc zwraca wskaŸnik
								  // do pierwszego elementu nowego obszaru pamiêci.
								  // 	Rozmiar tego obszaru to jest 5 intów, wiêc w sumie
								  // to p jest wskaŸnikiem do 5-elementowej tablicy intów
}
