#include <stdio.h>
#include <stdlib.h>
double** strzep(int x);

// Zdobi chcia³ program któty zrobi tablice dynamiczn¹ która ma x wierszy, i ka¿dy wiersz ma x elementów
// tylko ¿e od ty³u
// czyli ¿e jak podasz 5 to masz tablice gdzie pierwszy wiersz ma 5 elementów
// drugi ma 4, trzeci 3 itd.
// wa¿ne ¿eby nie podaæ zero bo malloc siê wyjebie


int main(void)
{	
	double **p;				//definiujesz podwójny wskaŸnik, bo tablica jest dwuwymiarowa
							//czyli najpierw wskaŸnik do tablicy wskaŸników
							//a potem ka¿dy element jest wskaŸnikiem do tablici double
							//i wychodzi tablica 2 wymiarowa double
							
	p=strzep(3);			
	p[0][0]=1;				// tutaj tylko sprawdzam czy dzia³a
	printf("%f ",p[0][0]);
	
	return(0);
}


	
double** strzep(int x)		//funkcja zwraca podwójny wskaŸnik, pobiera inta
							// ten int mówi ile wierszy bêdzie
{
	double **p;
	p = malloc(x*sizeof(double*));	// pierwszy malloc, czyli liczba wierszy
	for(int i=0;i<x;i++)			// for który siê wykona tyle razy ile wierszy
	{
		p[i]=malloc((x-i)*sizeof(double));	// leci po kolei wierszami i ka¿demu mallocuje x-i kolumn, czyli tak jak w poleceniu
											// p[i], czyli i numer wiersza, przypisuje obszar pamieci równy x-i double
											// p[i] to jest ju¿ wskaŸnik pojedynczy 
	}
	
	return(p);
}
