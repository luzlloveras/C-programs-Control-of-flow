/*	Ingresar 10 valores por teclado.
	Indicar cual fue el mayor y en que posicion entro.	*/

#include <stdio.h>
#include <limits.h>

int main() {
	int i, numero, posicion_max, max = INT_MIN;
	
	for (i=0;i<10;i++) {		
		printf("Ingrese numero\n");
		scanf("%d", &numero);
		if (numero>max) {
			max=numero;
			posicion_max=i+1;
		}
	}
	
	printf("El numero mayor es %d\n y entro en posicion %d", max, posicion_max);

	return 0;
}
