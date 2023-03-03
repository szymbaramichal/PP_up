#include <stdio.h>
#include <stdlib.h>
double** strzep(int x);

// Zdobi chcia� program kt�ty zrobi tablice dynamiczn� kt�ra ma x wierszy, i ka�dy wiersz ma x element�w
// tylko �e od ty�u
// czyli �e jak podasz 5 to masz tablice gdzie pierwszy wiersz ma 5 element�w
// drugi ma 4, trzeci 3 itd.
// wa�ne �eby nie poda� zero bo malloc si� wyjebie


int main(void)
{	
	double **p;				//definiujesz podw�jny wska�nik, bo tablica jest dwuwymiarowa
							//czyli najpierw wska�nik do tablicy wska�nik�w
							//a potem ka�dy element jest wska�nikiem do tablici double
							//i wychodzi tablica 2 wymiarowa double
							
	p=strzep(3);			
	p[0][0]=1;				// tutaj tylko sprawdzam czy dzia�a
	printf("%f ",p[0][0]);
	
	return(0);
}


	
double** strzep(int x)		//funkcja zwraca podw�jny wska�nik, pobiera inta
							// ten int m�wi ile wierszy b�dzie
{
	double **p;
	p = malloc(x*sizeof(double*));	// pierwszy malloc, czyli liczba wierszy
	for(int i=0;i<x;i++)			// for kt�ry si� wykona tyle razy ile wierszy
	{
		p[i]=malloc((x-i)*sizeof(double));	// leci po kolei wierszami i ka�demu mallocuje x-i kolumn, czyli tak jak w poleceniu
											// p[i], czyli i numer wiersza, przypisuje obszar pamieci r�wny x-i double
											// p[i] to jest ju� wska�nik pojedynczy 
	}
	
	return(p);
}
