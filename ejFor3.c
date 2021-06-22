#include <stdio.h>

/* 
	Ejercicio 3 for
	
	Celular


		Desarrollar una aplicacion que permita informar cuantos usos tiene un dispositivo respecto a un consumo
		
		El total de la bateria es 100% inicialmente

		El consumo es ingresado por el usuario

		Finalmente se informara la cantidad de usos totales posibles
	

		ej: 
			Ingresando que el consumo es del 15%
		 	Informe: Son posibles 6 usos


		EXTRA: informar al final del informe la bateria restante que quedaria sin usar

 */

int main(){

	int cantUsos = 0;
	int consumo =  0;

	printf("Ingrese el consumo\n");
	scanf("%i", &consumo);

	for(int bateria = consumo; bateria <= 100 ; bateria += consumo){
		cantUsos++;
		printf("bateria: %i \n", bateria );
	}

	printf("Informe\n");
	printf("Consumo: %i \n", consumo );
	printf("Cant de usos posibles: %i\n", cantUsos );


	return 0;
}