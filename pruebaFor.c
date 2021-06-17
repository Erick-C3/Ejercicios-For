#include <stdio.h>

int main(){


	/*
		1º ciclo i = 0 ? SI 
		2º ciclo i = i + 3 -> i = 3 ? SI
		3º ciclo i = i + 3 -> i  = 6 ? SI
		4º ciclo i = i + 3 -> i = 9 ? SI
		5º ciclo i = 1 + 3 -> i = 12 ? SI
	*/
	for(int i = 0 ; i < 10 ; i = i - 1 ){

		printf("Hello world! i: %i\n", i);

	}

 // ver una forma de saber el numero de ciclo de cada mensaje impreso
	


	return 0;
}