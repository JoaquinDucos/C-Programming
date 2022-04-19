#include <stdio.h>
#include <stdlib.h>

struct contacto{
    int edad;
    long numero;
};

typedef struct contacto contacto_d;

int main()
{
    /*
     * Forma memoria estática

    contacto_d contacto1;

    contacto1.edad = 3;
    contacto1.numero= 1121571534;

    printf("\nEdad del contacto: %d\n", contacto1.edad);
    printf("\nNumero del contacto: %ld\n\n", contacto1.numero);
    */
// Forma memoria dinámica

    contacto_d* contacto1 = malloc(sizeof(contacto_d));

    if (contacto1 == NULL)
    {
        printf("\Error, memoria llena!\n");
    }
    else
    {

    contacto1->edad = 3;
    }

    printf("\nEdad del contacto1_dinámico: %d\n\n", contacto1->edad);

    free(contacto1);
    contacto_d* contacto3 = malloc(sizeof(contacto_d));

    // !contacto3  es lo mismo que decir: contacto3 == NULL

    if (!contacto3)
    {
        printf("\Error, memoria llena!\n");
    }
    else
    {

    contacto3->edad = 8;
    }

    printf("\nEdad del contacto1_dinámico: %d\n\n", contacto3->edad);

    free(contacto3);

    return 0;
}
