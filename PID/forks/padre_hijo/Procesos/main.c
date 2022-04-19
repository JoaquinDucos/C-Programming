#include <stdio.h>
#include <unistd.h>

int var = 22;
int main(void)
{
    pid_t pidC;
    printf("** Proceso PID = %d, pidC = %dcomienza ** \n", getpid(), pidC);
    pidC = fork();

    printf("Proceeso PID = %d, pidC = %d ejecutándose \n", getpid(), pidC);

    if (pidC > 0) //Entonces se sabe que se está ejecutando el padre
    {
       var = 44;
    }
    else if (pidC == 0) // Valor 0 es el que fork le devuelve al hijo, entonces se ejecuta el hijo.
    {
        var = 33;
    }
    else
    {
        printf("\n ERROR!\n");
        return -1;
    }

    while (1)
    {
        sleep(2);
        printf("Proceeso PID = %d, var = %d ejecutándose \n", getpid(), var);

    }
    return 0;
}
