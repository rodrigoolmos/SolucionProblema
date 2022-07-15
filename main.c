/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#include <stdlib.h>


int generate_1_to7_aleatoryNumber();
int aleatoryNumber=0;

int times_aleatoryNumber[8];

int main (void) {
	
	int i;
	
	for(i=0; i<8; i++){
	
		valor[i]=0;
	
	}

	
	while(1){
		
		
		
		aleatoryNumber = generate7_aleatoryNumber();

		
		times_aleatoryNumber[aleatoryNumber]++;
		
		
	}
	
}

int generate7_aleatoryNumber() {
	
	int returnValue = 0;


	while(!retornValue ){//el bucle se repite hasta que se cumpla alguna condición

		int aleatoryNumber1 = 0;
		int aleatoryNumber2 = 0;

		aleatoryNumber1 = (int)(rand() % 5 + 1);
		aleatoryNumber2 = (int)(rand() % 5 + 1);
		  //todas las combinaciones tienen las mismas posibilidades por lo que el numero aleatorio generado tendrá una probabilidad plana
		if(aleatoryNumber1 ==1&&numero2==2) {

			returnValue = 1;

		}
		if(aleatoryNumber1==1 && aleatoryNumber2==3) {

			returnValue = 2;

		}
		if(aleatoryNumber1 ==1 && aleatoryNumber2==4) {

			returnValue = 3;

		}
		if(aleatoryNumber1 ==1 && aleatoryNumber2==5) {

			returnValue = 4;

		}
		if(aleatoryNumber1 ==2 && aleatoryNumber2==1) {

			returnValue = 5;

		}
		if(aleatoryNumber1 ==2 && aleatoryNumber2==2) {

			returnValue = 6;

		}
		if(aleatoryNumber1 ==2 && aleatoryNumber2==3) {

			
			returnValue = 7;

		}

	}

	return returnValue;


}
