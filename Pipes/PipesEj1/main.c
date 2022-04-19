#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int fd[2];
    pid_t pidC;     //pid_t es una variable de tipo entero.
    char buf[50];
    ssize_t num;  //porque es un tipo especial de int para los bytes en este caso
    char *mensaje = malloc(sizeof(char));

    printf("\nEscriba un mensaje: ");
    scanf("%s", mensaje);

    pipe(fd);
    pidC = fork();
    switch (pidC)
    {
      case 0:          // Hijo
        close(fd[0]);   // cerramos los descriptores que no sean necesarios. EN este caso el de leer, índice 0 [0]
         write(fd[1], mensaje, strlen(mensaje)); // Sería: write(fd[1], "abcde", 5); pero lo cambié para que sea de la cantidad de caracteres que se quiera
         close(fd[1]);
         exit(0);

         break;
      case -1:         //ERROR
        printf("\nError!\n");
         break;
      default:         //Padre
        close(fd[1]);
        num = read(fd[0], buf, sizeof(buf));

        printf("\nPadre lee %ld bytes: %s\n", (num + 1), buf); // le agrego +1 porque el /0 al final del string  ocupa un byte.
        free(mensaje);
        close(fd[0]);

         break;
    }

    return 0;
}
