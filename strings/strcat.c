
//Añadir una cadena, concatenar, al final de otra, Ej: Cadena1Cadena2

#include <stdio.h>
#include <string.h>

int main(void)
{
    char nombre_completo[50];
    char nombre[] = "Mario";
    char apellido[] = "Lopez";

    strcpy(nombre_completo, nombre);    //guardo el dato del array nombre y lo "coloco" en nombre_completo como su primer valor.
    strcat(nombre_completo, " ");    // Añado un caracter, en este caso espacio, a la cadena y las concateno.
    strcat(nombre_completo, apellido);  // añado al final de la cadena nombre_completo una cadena nueva.

    printf("\nEl nombre completo introudcido es: %s\n\n", nombre_completo);

    printf("\n-----------FIN DEL PROGRAMA-----------\n");

    return 0;
}