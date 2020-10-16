/*  Problema 14 pagina 90:
    Ingresar datos de 10 alumnos
            legajo
            notas notas notas notas notas notas notas notas
    Indicar cual es el ALUMNO de mejor promedio     */

#include <stdio.h>

int main() 
{
    
    int i, j, alumno, nota, legajo, acumulador_notas, promedio = 0, mayor_promedio = 0;

    for (i = 0; i < 10; i++) 
    {
        printf("Ingresar legajo\n");
        scanf("%d", &legajo);
        printf("Ingresar nota");
        for (j = 0, acumulador_notas = 0; j < 8; j++) 
        {
            scanf("%d", &nota);             // se acumulan las 8 notas
            acumulador_notas += nota;
        }
        promedio = acumulador_notas / 3;      // calculo el promedio del alumno

        if (promedio > mayor_promedio)
        {       // declaro el valor del mayor promedio
            mayor_promedio = promedio;
            alumno = i+1;
        } 
    }
    
    printf ("El alumno de mayor promedio es el numero %d con un promedio de %d\n", alumno, mayor_promedio); 

    return 0;
}
