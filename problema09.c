/*	Determinar si hay enteros de 3 cifras cuyo valor sea igual al producto de cada una de las mismas. */

#include <stdio.h>

int main() 
{
	
	int num, a, b, c, i;
	int flag = 0;
	for (num = 111; num <= 999; num++) 
	{	
		c = num % 10;
		b = (num / 10) % 10;
		a = (num / 10) / 10;
		
		if (num == a * b * c)
		{
			printf("%d es igual a la multiplicacion de sus valores\n", num);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("No hay valores que cumplan con la condicion\n");
	}
	return 0;
}
