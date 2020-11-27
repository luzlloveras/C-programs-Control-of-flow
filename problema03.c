/*	Se ingresaran numeros enteros hasta que se ingrese el 235.
	Indicar cuantas veces ocurrio el ingreso del numero 23.	*/

#include <stdio.h>

int main() 
{
	int n, numero_23;
	numero_23 = 0;
	do {
		printf("Ingrese numero\n");
		scanf("%d", &n);
		if (n == 23)
			numero_23++;
	}while(n != 235);
	
	printf("El numero 23 se ingreso %d veces\n", numero_23);
	return 0;
}
