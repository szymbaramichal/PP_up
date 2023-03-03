#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	
	p = malloc(5*sizeof(int));	//	W tym programie te¿ nic siê nie dzieje
	p[3]=4;						//	tylko jest u¿yte free
	printf("%d",p[3]);			//  Po prostu ¿eby zwolniæ ten obszar pamiêci u¿ywasz free na wskaŸnik do tego obszaru
	free(p);
	
	
	return(0);
}
