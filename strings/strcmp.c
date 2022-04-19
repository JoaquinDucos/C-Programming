#include <stdio.h>
#include <string.h>

int main(void) 
{
    char *resultado1 = "cara";
    char *resultado2 = "cruz";

    char resp[10];

    printf("\nIntroduce un resultado posible: ");
    scanf("%s", resp);



    if(strcmp(resultado1, resp) == 0)    // 0 si coincide con lo que está comparando, sino, devuelve -1
    {
        printf("\nSí es igual\n");
    }

    else if(strcmp(resultado2, resp) == 0)
    {
        printf("\nAcertaste!\n");
    }

    else if(strcmp(resultado1, resp) != 0)
    {
         printf("\nEl valor introducido no coincide con ninguna búsqueda.\n");
    }

    else if(strcmp(resultado2, resp) != 0)
    {
         printf("\nEl valor introducido no coincide con ninguna búsqueda.\n");
    }

printf("\nFIN DEL PROGRAMA\n");

    return 0;
}