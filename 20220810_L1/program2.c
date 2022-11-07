#include <stdio.h>

int main()
{
	int firstNum, secondNum;

	printf("Type first number: \n");
	scanf("%d", &firstNum);
	
	printf("Type second number: \n");
	scanf("%d", &secondNum);
	
	printf("Sum of %d and %d is: %d", firstNum, secondNum, firstNum + secondNum);
}
