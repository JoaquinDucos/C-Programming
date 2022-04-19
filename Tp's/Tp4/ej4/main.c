#include <stdio.h>
#include "funciones.h"

/* Compilar y ejecutar como:   gcc main.c funciones.c -o main -Wall
                               ./main
*/                            

int main (void )
{
    int base, exponente;
    
    
    printf("\n ------------CALCULO DE POTENCIAS------------\n\n");
    
    printf("\n Ingrese un numero que desea saber su potencia: ");
    scanf("%d", &base); 
    printf("\n"); 
    printf("\n Ingrese su exponente: ");
    scanf("%d", &exponente); 
    
     float resultado = pote (base, exponente);
    
    printf("\n Resultado de la potencia: %f\n", resultado);
    
    printf("\n ------------FIN DEL PROGRAMA------------\n\n");

return 0;
}

