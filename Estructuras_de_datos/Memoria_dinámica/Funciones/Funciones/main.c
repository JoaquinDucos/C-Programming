#include <stdio.h>
#include <stdlib.h>

struct fecha{
    int dia;
    int mes;
    int anio;
};
typedef struct fecha fecha_t;

fecha_t* crear_fecha()
{
   fecha_t* nueva_fecha = malloc(sizeof(fecha_t));
   if(!nueva_fecha)
   {
       printf("\nERROR!\n");
   }
   else
   {
    //asigno los valores
       fflush(stdin);
       printf("\nIngrese el día: ");
       scanf("%d", &nueva_fecha->dia);
       fflush(stdin);
       printf("\nIngrese el mes: ");
       scanf("%d", &nueva_fecha->mes);
       fflush(stdin);
       printf("\nIngrese el año: ");
       scanf("%d", &nueva_fecha->anio);
   }
   return nueva_fecha;
}

void imprimir_fecha(fecha_t* fecha_a_imprimir)
{
   printf("\n\n Día: %d Mes: %d Año: %d \n\n", fecha_a_imprimir->dia, fecha_a_imprimir->mes, fecha_a_imprimir->anio);
}

int main()
{
    fecha_t* fecha1 = crear_fecha();
    imprimir_fecha (fecha1);

    fecha_t* fecha2 = crear_fecha();
    imprimir_fecha (fecha2);

    fecha_t* fecha3= crear_fecha();
    imprimir_fecha (fecha3);

    return 0;
}
