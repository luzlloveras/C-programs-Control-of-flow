/*	Se ingresaran numeros enteros positivos. 
	Determinar cuantos son pares.
	El ingreso finaliara con un numero negativo.	*/

#include <stdio.h>

int main() {
	int n, pares;
	pares = 0;
	do{
		printf("Ingrese numero\n");
		scanf("%d", &n);
		if (n%2 == 0){
			pares++;
		}
		else;
	}while (n>0);
	
	printf("Se hallaron %d numeros pares", pares);
	
	return 0;
}
