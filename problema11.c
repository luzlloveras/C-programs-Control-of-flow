/*	Ingresar 10 valores por teclado.
	Indicar si esta secuencia es creciente.	*/

#include <stdio.h>

int main() 
{
	int i, numero_previo, numero_actual, flag=0;
	
	printf("Ingrese numero\n");
	scanf("%d", &numero_previo);
	
	for (i = 0; i < 10; i++) 
	{
		printf("Ingrese numero\n");
		scanf("%d", &numero_actual);
		if (numero_previo > numero_actual)
			flag=1;
	}
	
	if (flag == 0)
		printf("La secuencia es creciente.\n");
	else 
		printf("La secuencia NO es creciente.\n");
	
	return 0;
}

