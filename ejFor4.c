#include <stdio.h>

/*
	Software de produccion

	Desarrollar un algoritmo que permita producir cierta cantidad de productos
	dependiendo de la energia y recursos
	
	Aspectos a tener en cuenta:
		- La maquina solo funciona si hay 25 de energia
		- Cada uso de la maquina permite producir 5 productos
		- Cada producto requiere:
			- 0.5 KG del recurso1
			- 2 L del recurso2
			- 1.7 KG del recurso3
	Requisitos:
		• Solicitar al usuario:
			- Energia inicial de la maquina
			- Stock de recursos
		• Producir la cantidad de productos correspondientes
		• Informar finalmente:
			- Energia restante
			- Productos producidos
			- Stock restante de recursos


	EXTRA: Parar la maquina en caso de que no sea posible producir mas productos evitando
			un uso innecesario de la misma
*/

const int CONSUMO_CICLO = 25;
const float CONSUMO_REC_1 = 0.5;
const float CONSUMO_REC_2 = 2;
const float CONSUMO_REC_3 = 1.7;
const int PRODUCTOS_CICLO = 5;

int main(){

	int energiaInicial = 0;
	float stockRecurso1 = 0;
	float stockRecurso2 = 0;
	float stockRecurso3 = 0;

	int productosProducidos = 0;

	printf("Ingrese\n - Energia inicial\n -Stocks de:\n  -Recurso 1\n  -Recurso 2\n  -Recurso 3\n");
	scanf("%i%f%f%f", &energiaInicial, &stockRecurso1, &stockRecurso2, &stockRecurso3);

	for(int consTotal = CONSUMO_CICLO ; consTotal <= energiaInicial ; consTotal+=CONSUMO_CICLO){
		if(stockRecurso1 >= CONSUMO_REC_1 && stockRecurso2 >= CONSUMO_REC_2 && stockRecurso3
			>= CONSUMO_REC_3){
			printf("Producir producto\n");
			stockRecurso1-= CONSUMO_REC_1;
			stockRecurso2-= CONSUMO_REC_2;
			stockRecurso3-= CONSUMO_REC_3;
			productosProducidos+=PRODUCTOS_CICLO;
		}else{
			printf("No hay recursos suficientes\n");
		}
	}
	printf("Energia restante %i%\n", energiaInicial - ((productosProducidos/PRODUCTOS_CICLO) * CONSUMO_CICLO));
	printf("Producidos: %i productos\n",productosProducidos );
	printf("Quedaron:\n\tStock recurso 1: %f\n\tStock recurso 2: %f\n\tStock recurso 3: %f\n", stockRecurso1, stockRecurso2, stockRecurso3);

	return 0;
}