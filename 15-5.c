#include "stdafx.h"
#include <stdio.h>
#include <math.h>

double hypotenuse( double side_1 , double side_2 )
{
	double hypotenuse;
	
	hypotenuse = sqrt ( (side_1 * side_1) + (side_2 * side_2) );

	return hypotenuse;


}//end hypotenuse

int main()
{

	double side_1;
	double side_2;

	printf("Enter side_1 , side_2 : ");
	scanf("%lf %lf" ,&side_1 ,&side_2);
	
	printf("Triangle\tSide_1\t  Side_2\thypotenuse\n");
	printf("%d\t      %5.1Lf\t%5.1Lf,       %5.1Lf" , 1, side_1, side_2, hypotenuse( side_1 ,side_2));

	scanf("%d");
	return 0;
}//end main
