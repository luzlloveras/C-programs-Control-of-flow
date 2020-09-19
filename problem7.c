/*	Mostrar los primeros cinco numeros perfectos.	*/

#include <stdio.h>

int main() {
	int n, i, j, acum_div, cont_perfectos;
		cont_perfectos=0;
		
	for (n=1;cont_perfectos<5;n++){
		acum_div=0;
		for (i=1;i<n;i++){
			if(n % i == 0){
				acum_div=acum_div+i;
			}
		}
		if (acum_div==n){
			printf("\n%d es numero perfecto\n\n", n);
			cont_perfectos++;
		}
			
		if (n%20000==0){
			printf("\n\nEspere mientras se encuentra el quinto numero perfecto.\n\n");
		}
	}
	return 0;
}
