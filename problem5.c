/*	Permitir solo tres ingresos de una clave numerica entera.
	Luego del tercer intento fallido colocar una advertencia.
	Finalizar el ingreso solo cuando la clave ingresada sea 23645.	*/

#include <stdio.h>

int main() {
	int i, clave, flag=0;
	
	for(i=0;i<3;i++) {
		printf("Ingrese clave\n");
		scanf("%d", &clave);
		if (clave==23645){
			printf("Ingreso clave correcta \n");
			flag=1;
			break;
		}
	}
	if (flag==0)
		printf("Supero los tres intentos fallidos\n");
	return 0;
}
