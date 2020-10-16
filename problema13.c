/*  Ingresar datos de alumnos.
        nota(int)
        sexo(char)- f/m
    Indicar si el mejor promedio pertenece a f o m. (Utilizar switch)
*/

#include <stdio.h>

int main () 
{
    char s,f;
    int i, nota, acumulador_f = 0, contador_f = 0, acumulador_m = 0, contador_m = 0, promedio_f = 0, promedio_m = 0;
    for (i = 0; i < 6; i++)
    {                           
        printf("Ingresar sexo:\n");      // Ingreso sexo
        fflush(stdin);
        scanf("%c", &s);
        printf("Ingresar nota:\n");      // Ingreso nota
        scanf("%d", &nota);
        if (s == 'f') 
        {                           // Acumulo notas del genero femenino
            acumulador_f += nota;
            contador_f++;
        }    
        else 
        {
            acumulador_m += nota;                 // Acumulo notas del genero masculino
            contador_m++;
        }
    }
    promedio_f = acumulador_f / contador_f;                // Calculo promedio de mujeres
    promedio_m = acumulador_m / contador_m;                // Calculo promedio de hombres

    if (promedio_f > promedio_m)                  // Defino a que genero pertenece el mejor promedio y lo imprimo en pantalla
    {
        printf("El mejor promedio es de %d y pertenece a las mujeres/n", promedio_f);
    }
    else
    {
        printf("El mejor promedio es de %d y pertenece a los hombres/n", promedio_m);
    }

    return 0;
}
