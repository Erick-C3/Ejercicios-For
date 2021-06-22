#include <stdio.h>

/* 
	FACTURA 

	Desarrollar un software para llevar un conteo de ventas
	con las cuales tendremos 2 tipos: venta con descuento y venta normal
	
	Requisitos: 
		• debe permitirse al usuario indicar si posee un descuent o no y dependiendo de
		  la informacion se procedera a realizar la venta correspondiente

		• la cantidad de productos totales son ingresados por el usuario

		• finalmente se debe imprimir un informe

	ej: total de productos = 10
		si el usuario ingresa 5 veces compras con descuento entonces
			las ventas con descuento finaliza con un valor de 5
			y las ventas normales finaliza con un valor de 5

		informe:
			total de ventas = 10
			total de ventas con descuento = 5
			total de ventas normales = 5

	EXTRA: permitir al usuario ingresar el costo del producto y realizar un descuento en caso necesario
		   en el informe agregar el costo final total y el valor ahorrado
 */

int main(){

	int ventasDescuento = 0;
	int ventasNormales = 0;
	int comprasTotales = 0;

	int opcDescuento = 0; // 0 falso y 1 para verdadero

	printf("Ingrese la cantidad de compras a realizar\n");
	scanf("%i", &comprasTotales);

	for(int venta = 0; venta < comprasTotales ; venta ++){
		printf("Tenes descuento para esta compra? 0 para no y 1 para si\n");
		scanf("%i", &opcDescuento);
		if(opcDescuento){
			ventasDescuento++;
		}else{
			ventasNormales++;
		}
	}

	printf("Informe:\n");
	printf("Total de ventas: %i\n", comprasTotales );
	printf("Total de ventas con descuento: %i \n", ventasDescuento );
	printf("Total de ventas normales: %i\n", ventasNormales);


	return 0;
}