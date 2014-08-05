//compile with visual studio 2010

#include "stdafx.h"
#include <stdio.h>
#include <math.h>

double mohasebe_sharje(float saat)
{

	if( saat <=3 ){
	
		return 2;
	
	}//end if

	else if( saat == 24 ){
		
		return 10;
	
	}//end else if

	else if( saat > 3 ){
		
		return ( (ceil(saat)-3) * .5) + 2;
		
	}//end else if




}//end mohasebe_sharje




int main(void)
{

	float saat_mashin_1 , saat_mashin_2 , saat_mashin_3 ,jame_saat ;
	float sharje_mashin_1 , sharje_mashin_2 , sharje_mashin_3 , jame_sharje;
    
	printf("Khodro #1 chand saat park karde ast: ");
	scanf("%f" ,&saat_mashin_1);

	printf("Khodro #2 chand saat park karde ast: ");
	scanf("%f" ,&saat_mashin_2);

	printf("Khodro #3 chand saat park karde ast: ");
	scanf("%f" ,&saat_mashin_3);


	jame_saat = saat_mashin_1 + saat_mashin_2 + saat_mashin_3 ;

	sharje_mashin_1 =  mohasebe_sharje(saat_mashin_1);
	sharje_mashin_2 =  mohasebe_sharje(saat_mashin_2);
	sharje_mashin_3 =  mohasebe_sharje(saat_mashin_3);

	jame_sharje = sharje_mashin_1 + sharje_mashin_2 + sharje_mashin_3 ;

	printf("Khodro\tSaatha\tSharje\n");
  	printf("%d\t%5.1f\t%6.2f\n", 1, saat_mashin_1, sharje_mashin_1);
        printf("%d\t%5.1f\t%6.2f\n", 2, saat_mashin_2, sharje_mashin_2);
        printf("%d\t%5.1f\t%6.2f\n", 3, saat_mashin_3, sharje_mashin_3);
        printf("TOTAL\t%5.1f\t%6.2f\n", jame_saat, jame_sharje);

		
    return 0;

}//end main



