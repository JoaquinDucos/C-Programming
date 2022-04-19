#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd, n;
    char buf [1024];

    fd = open("/Desktop/Electronica/Info I/Archivos/Fifos/Mi_primer_fifo", O_RDONLY);
    n = read(fd, buf, sizeof(buf));

    close (fd);

    return 0;
}
