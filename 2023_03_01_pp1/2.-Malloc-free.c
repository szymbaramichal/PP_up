#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	
	p = malloc(5*sizeof(int));	//	W tym programie te� nic si� nie dzieje
	p[3]=4;						//	tylko jest u�yte free
	printf("%d",p[3]);			//  Po prostu �eby zwolni� ten obszar pami�ci u�ywasz free na wska�nik do tego obszaru
	free(p);
	
	
	return(0);
}
