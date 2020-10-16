/*	Permitir el ingreso de una clave numerica entera.
	Finalizar el ingreso solo cuando la clave ingresada sea 23645.	*/

#include <stdio.h>

int main() 
{
	int clave;
	
	do {
		printf("Ingrese clave\n");
		scanf("%d", &clave);
	}while (clave != 23645);
	
	return 0;
}
