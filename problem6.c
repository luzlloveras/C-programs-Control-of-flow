/*	Ingresar un numero entero positivo por teclado.
	Determinar si es o no un numero perfecto.	*/

#include <stdio.h>

int main() {
	int n, i, acum_div;
	acum_div=0;
	printf("Ingrese numero\n");
	scanf("%d", &n);
	
	for (i=1;i<n;i++){
		if(n % i == 0){
			acum_div=acum_div+i;
		}
	}
	if (acum_div==n){
		printf("%d es un numero perfecto", n);
	}
	else {
		printf("%d no es un numero perfecto", n);
	}		
	return 0;
}
