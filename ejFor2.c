#include <stdio.h>

const int INTENTOS_MAX = 5;

#define USUARIO_1 "Fulanito1"
const int OPC_USUARIO_1 = 1;
const int CONTRASENIA_REGISTRADA = 123;

#define USUARIO_2 "Fulanito2"
#define USUARIO_3 "Fulanito3"
#define USUARIO_4 "Fulanito4"

int main(){

	int opcUsuario = 0;
	int contraseniaRecibida = 0;

	for (int i = 0; i < INTENTOS_MAX; ++i){
		printf("1 para %s\n", USUARIO_1);
		printf("2 para %s\n", USUARIO_2);
		printf("3 para %s\n", USUARIO_3);
		printf("4 para %s\n", USUARIO_4);

		printf("Ingrese usuario correspondiente\n");
		scanf("%i", &opcUsuario);
		printf("Ingrese contrasenia\n");
		scanf("%i", &contraseniaRecibida);
		if(opcUsuario == OPC_USUARIO_1 && contraseniaRecibida == CONTRASENIA_REGISTRADA){
			printf("Bienvenido %s\n", USUARIO_1 );
			i = INTENTOS_MAX;
		}else if(i == INTENTOS_MAX-1){
			printf("Error\nNo te quedan intentos, espere 24hrs\n");
		}else{
			printf("Error, te quedan %i intentos\n", INTENTOS_MAX - (i +1));
		}
	}



	return 0;
}