/*----------------------------------------------------------------------------
 * CMSIS-RTOS 'main' function template
 *---------------------------------------------------------------------------*/

#include <stdlib.h>


int numero_aleatorio_7();
int numero=0;

int valor[8];

int main (void) {
	
	int i;
	
	for(i=0; i<8; i++){
	
		valor[i]=0;
	
	}

	
	while(1){
		
		
		
		numero = numero_aleatorio_7();

		
		valor[numero]++;
		
		
	}
	
}

int numero_aleatorio_7() {

	for(; ; ){//el bucle se repite hasta que se cumpla alguna condición

		int numero1 = 0;
		int numero2 = 0;

		numero1=(int)(rand() % 5 + 1);
		numero2=(int)(rand() % 5 + 1);
		  //todas las combinaciones tienen las mismas posibilidades por lo que el numero aleatorio generado tendrá una probabilidad plana
		if(numero1==1&&numero2==2) {

			return 1;

		}
		if(numero1==1&&numero2==3) {

			return 2;

		}
		if(numero1==1&&numero2==4) {

			return 3;

		}
		if(numero1==1&&numero2==5) {

			return 4;

		}
		if(numero1==2&&numero2==1) {

			return 5;

		}
			if(numero1==2&&numero2==2) {

			return 7;

		}
		if(numero1==2&&numero2==3) {

			return 6;

		}

	}


}
