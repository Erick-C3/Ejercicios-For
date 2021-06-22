#include <stdio.h>

int main(){
	int rangoMinimo = 0;
	int rangoMaximo = 0;

	int cantPar = 0;
	int cantImpar = 0;

	printf("Ingrese rango minimo\n");
	scanf("%i", &rangoMinimo);
	printf("Ingrese rango maximo\n");
	scanf("%i", &rangoMaximo);

	for(int i = rangoMinimo ; i <= rangoMaximo ; i++){
		if(i%2 == 0){
			printf("Es par: %i\n", i);
			cantPar++;
		}else{
			printf("No es par: %i\n", i);
			cantImpar++;
		}
	}	

	printf("Cantidad de numeros pares: %i\n", cantPar);
	printf("Cantidad de numeros impares: %i\n", cantImpar);

	return 0;
}