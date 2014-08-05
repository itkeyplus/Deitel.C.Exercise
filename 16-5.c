#include "stdafx.h"
#include <stdio.h>
#include <conio.h>


long int integerPower(long int base , unsigned int exponent)
{

	unsigned int i=1;
	long int result = 1;

	for(i=1 ; i<=exponent ; i++){

			result *=base;
	
	}//end for

	return result;
}


int main(void)
{
	int b;
	unsigned int exp;


	printf("Enter base: ");
	scanf("%d" ,&b);

	printf("Enter eponent: ");
	scanf("%u" ,&exp);


	printf("base^exponent = %ld" ,integerPower(b , exp));

	getch();
	return 0;


}//end main
