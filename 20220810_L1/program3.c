#include <stdio.h>

int main()
{
	int x, suma;
	
//Pierwszy spos�b
//	for(int i = 1; i <= 4; i++)
//	{
//		printf("Podaj %d liczbe: \n", i);
//		scanf("%d", &x);
//		suma += x;
//	}
//	
//	printf("Suma wynosi: %d", suma);


//Drugi spos�b
	printf("Podaj 1 liczbe: \n");
	scanf("%d", &x);
	suma += x;
	
	printf("Podaj 2 liczbe: \n");
	scanf("%d", &x);
	suma += x;
	
	printf("Podaj 3 liczbe: \n");
	scanf("%d", &x);
	suma += x;
	
	printf("Podaj 4 liczbe: \n");
	scanf("%d", &x);
	suma += x;
	
	printf("Suma wynosi: %d", suma);
	
}
