/*	Simular el tiro de una moneda para 100 intentos.
	Mostrar el porcentaje de ocurrencia de cara y ceca.	*/

#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main() 
{
	
	int i, n, azar, cara, ceca;
	cara = 0;
	ceca = 0;
	n = 100;
	srand(time(0));
	
	for (i = 0; i < n; i++)
	{
		azar = rand()%2;
		if (azar == 0)
			cara++;
		else 
			ceca++;
	}
	
	printf("El porcentaje de ocurrencia de cara es %f %%\n", ((float)cara/n) * 100);
	printf("El porcentaje de ocurrencia de ceca es %f %%\n", ((float)ceca/n) * 100);
	
	return 0;
}
