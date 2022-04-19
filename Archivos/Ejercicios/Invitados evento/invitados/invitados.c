#include <stdio.h>
#include <stdlib.h>

/*
struct invitados{
    char nombre[20];
    char apellido[22];
    int dni;
};
typedef struct invitados invitados_l;


invitados_l* crear_invitados()
  {

    invitados_l* nuevo_invitado = malloc(sizeof(invitados_l));
    if (nuevo_invitado == NULL)
    {
        printf("\nError! Hubo un problema con el espacio de memoria\n");
    }
    else
    {
        fflush(stdin);
        printf("\n\nIngrese el nombre del invitado: ");
        scanf("%s", nuevo_invitado->nombre);
        fflush(stdin);
        printf("\n\nIngrese el apellido: ");
        scanf("%s", nuevo_invitado->apellido);
        fflush(stdin);
        printf("\n\nIngrese el dni: ");
        scanf("%d", &nuevo_invitado->dni);
    }


    return nuevo_invitado;
  }
  otra forma de pensarlo
  */

void imprimir_menu()
{
    printf("\n------------------------------\n");
    printf("\nBienvenido al invitation Maker\n");
    printf("¿Qué desea hacer?\n");
    printf("1- Agregar Invitados\n");
    printf("2- Ver Invitados\n");
    printf("3- Salir\n ");
    printf("\n------------------------------\n");
}


void agregar_invitados()
{
    FILE* hoja_invitados = NULL;

    char* nombre_archivo = "hoja_invitados";
    char nombre[30];
    char apellido[30];
    int dni;

    hoja_invitados = fopen(nombre_archivo, "a");

    if(hoja_invitados==NULL) return -1;

    fflush(stdin);
    printf("Ingrese el nombre del invitado: ");
    scanf(" %[^\n]", nombre);

    fflush(stdin);
    printf("\n\nIngrese el apellido: ");
    scanf("%s", apellido);
    fflush(stdin);
    printf("\n\nIngrese el dni: ");
    scanf("%d", &dni);

    fprintf(hoja_invitados, "Nombre Y Apellido: %s %s   DNI: %d \n", nombre, apellido, dni);
    fclose(hoja_invitados);
}

void mostrar_invitados ()
{
  FILE* hoja_invitados;
  char* nombre_archivo = "hoja_invitados";
  char recorrido[80];
  int fin_recorrido = 0;

  hoja_invitados = fopen(nombre_archivo, "r");
  if(hoja_invitados == NULL) return -1;

  printf("\nLista de invitados: \n");
  fin_recorrido = fscanf(hoja_invitados, " %[^\n]", recorrido); //fscanf devuelve EOF si está al final del archivo. End Of FIle

  while(fin_recorrido!=EOF)
  {
      printf("%s\n", recorrido);
     fin_recorrido = fscanf(hoja_invitados, " %[^\n]", recorrido);
  }
  fclose(hoja_invitados);
 }

int main()
{
   int aprobacion;
   int salir = 0;

   while(salir==0)
   {
      imprimir_menu();
      scanf("%d", &aprobacion);

      if(aprobacion == 1)
      {

         agregar_invitados();

      }
      else if(aprobacion == 2)
      {
         mostrar_invitados ();
      }
      else if(aprobacion == 3)
        {
          printf("\nNo ha querido cargar nuevos invitados, el programa finalizó.\n\n");
          salir=1;
        }
    }
   return 0;
}


