/*	Se ingresaran 100 numeros enteros.
	Sumar los de orden impar por un lado.
	Sumar los de orden par por otro.
	Determinar cuales proporcionan la mayor suma. */

#include <stdio.h>

int main() {
	int n, i,  pares, impares;
	pares=0;
	impares=0;
			
	for(i=0;i<10;i++){
		printf("Ingreso un numero\n");
		scanf("%d", &n);
		if (n%2==0){
			pares=pares+n;
		}
		else {
			impares=impares+n;
		}
	}
	
	if (pares>impares){
		printf("La suma de numeros pares es mayor a la suma de impares\n");
	}
	else {
		if (pares<impares){
			printf("La suma de impares es mayor a la suma de pares\n");	
		}
		else {
			printf("La suma de pares es igual a la suma de impares\n");
		}
	}
	return 0;
}
