#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void)
{
    int fd;
    char buf[15];
    char *mififo;
    ssize_t num_bytes;

    mkfifo(mififo, 0666);
    fd = open("/home/joaquin/Desktop/Electronica/Info I/Archivos/Ficheros/FicheroEj/mifichero", O_CREAT | O_RDONLY);
    // si no existe ningun archivo o no se puede abrir, devuleve -1 como error.
    if (fd == -1)
    {
        printf("\nError al abrir o encontrar el archivo\n");
    }
    else
    {
        num_bytes = read(fd, buf, 8);  //1er arg, el file descriptor, segundo arg el buffer que va a pasar
                        //la información, y 3er arg, el numero de bytes que como máximo vamos a leer del fichero
        close(fd);
        if(num_bytes == 0)
        {
            printf("\nEl archivo se encuentra vacío\n");
        }
        else
        {
            printf("\nEl número de caracteres es: %d y el contenido: %s",(int) num_bytes, buf); // (int) num_bytes para que lo lea como entero pero sino, puedo ponerle %ld, lo lee como long.
        }
    }


    return 0;
}
