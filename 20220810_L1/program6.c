#include <stdio.h>

int main()
{
//	int x,y,z,m;
//	printf("podaj liczbe: \n");
//	scanf("%d", &x);
//	
//	printf("podaj liczbe: \n");
//	scanf("%d", &y);
//	
//	printf("podaj liczbe: \n");
//	scanf("%d", &z);
//	
//	if(x > y) m = x;
//	else m = y;
//	if(z > m) m = z;
//	
//	printf("Najwieksza liczba jest %d", m);
//	return 0;

	int num,maxNum;
	printf("podaj liczbe: \n");
	scanf("%d", &num);
	
	if(num > maxNum) maxNum = num;
	
	printf("podaj liczbe: \n");
	scanf("%d", &num);
	
	if(num > maxNum) maxNum = num;
	
	printf("podaj liczbe: \n");
	scanf("%d", &num);
	
	if(num > maxNum) maxNum = num;
	
	printf("Najwieksza liczba jest %d", maxNum);
	return 0;	
}
