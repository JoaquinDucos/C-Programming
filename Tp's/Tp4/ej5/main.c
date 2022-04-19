#include <stdio.h>
#include "funciones.h"

int main ( void )
{
    int num, base;

    
    printf("\n Ingrese un numero a descomponer polinomicamente (Unicamente enteros naturales) : ");
    scanf("%d", &num);
    
    printf("\n Ingrese la base: ");
    scanf("%d", &base);
    
    printf("\n\n");
    
    polinomio ( num, base);
       
    printf(" = %d", num);
    
    printf("\n\n -----------------FIN DEL PROGRAMA-----------------\n\n");
    
return 0;

}
