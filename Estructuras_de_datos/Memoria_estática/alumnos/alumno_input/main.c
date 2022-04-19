#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

struct alumno_s
{
    char nombre[30];
    int legajo;
    char carrera[30];
};

// Prototipos
struct alumno_s adquirirDatos(void);
void imprimirDatos(struct alumno_s);

int main(void)
{
    struct alumno_s alumno;
    alumno = adquirirDatos();
    imprimirDatos(alumno);

    return 0;
}

struct alumno_s adquirirDatos(void)
{
    struct alumno_s var;

    printf("\n\nIngrese nombre del alumno: ");
    gets(var.nombre);

    printf("\n\nIngrese legajo del alumno: ");
    scanf("%d", &var.legajo);

    printf("\n\nIngrese especialización del alumno: ");
    fgets(var.carrera,200, );

    return var;
}

void imprimirDatos(struct alumno_s var)
{
    printf("\n\n   *********************");

    printf("\n\n%s  %d  %s ", var.nombre, var.legajo, var.carrera);

    printf("\n\n   ********************* ");
}
