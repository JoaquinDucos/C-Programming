#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(void)
{

    int fd;
    char buf [] = "Mensaje 1..." ;

    mkfifo("/Desktop/Electronica/Info I/Archivos/Fifos/Mi_primer_fifo/fifo_prueba", 0666);

    fd = open("/Desktop/Electronica/Info I/Archivos/Fifos/Mi_primer_fifo", O_WRONLY);

    write(fd, buf, sizeof(buf));
    close(fd);

    return 0;
}
