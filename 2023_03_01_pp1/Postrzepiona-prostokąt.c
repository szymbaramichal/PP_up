#include <stdio.h>
#include <stdlib.h>

// To jest to samo co poprzedni program, tylko Zdobi chcia³ tym razem tablice prostok¹tnom


double** strzep(int x, int y);
int main(void)
{	
	double **p;
	
	p=strzep(3,4);
	p[2][3]=5;
	printf("%f ",p[2][3]);
	
	return(0);
}


	
double** strzep(int x, int y) // dlatego ta funckja pobiera 2 inty 
{
	double **p;
	p = malloc(x*sizeof(double*));
	for(int i=0;i<x;i++)
	{
		p[i]=malloc(y*sizeof(double)); // a tutaj zamist x-i jest y
	}
	
	return(p);
}
