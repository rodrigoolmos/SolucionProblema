
int generate_1_to7_aleatoryNumber();


int main (void) {
	
	int i;
        
	int aleatoryNumber=0;

        int times_each_1_7_aleatoryNumber[8];
        
	for(i=0; i<8; i++){
	
		times_each_1_7_aleatoryNumber[i]=0;
	
	}

	
	for(i=0; i<9999999; i++){
		
		
		
		aleatoryNumber = generate_1_to7_aleatoryNumber();

		
		times_each_1_7_aleatoryNumber[aleatoryNumber]++;
		
		
	}
        
 	for(i=1; i<8; i++){
	
		printf("el valor [%i] ->  %i veces , porcentage de dicho valor %.3f%c \n",i,times_each_1_7_aleatoryNumber[i],
                        100.0*times_each_1_7_aleatoryNumber[i]/9999999,'%');
	
	}
        
        return 0;
	
}

int generate_1_to7_aleatoryNumber() {
	
	int returnValue = 0;


	while(!returnValue ){//el bucle se repite hasta que se cumpla alguna condición

		int aleatoryNumber1 = 0;
		int aleatoryNumber2 = 0;

		aleatoryNumber1 = (int)(rand() % 5 + 1);
		aleatoryNumber2 = (int)(rand() % 5 + 1);
		  //todas las combinaciones tienen las mismas posibilidades por lo que el numero aleatorio generado tendrá una probabilidad plana
		if(aleatoryNumber1 ==1&&aleatoryNumber2==2) {

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

