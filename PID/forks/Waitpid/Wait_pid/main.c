#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
    int pid1 = fork();
    if (pid1 == -1)
    {
        printf("\nError al crear el proceso/n");
        return 1;
    }
    else if (pid1 == 0)
    {
        sleep(4);
        printf("\nProceso: %d ejecutado\n", getpid());

        return 0;
    }

    int pid2 = fork();

    if (pid2 == -1)
    {
        printf("\nError al crear el proceso\n");
        return 2;
    }
    else if (pid2 == 0)
    {
        sleep(2);
        printf("\nProceso: %d ejecutado\n", getpid());
        return 0;
    }

    int pid1_esperar = waitpid(pid1, NULL, 0); //1er arg: pid del proceso, 2do arg: NULL, 3er arg 0
    printf("\nEspero al proceso %d\n", pid1_esperar);
    int pid2_esperar = waitpid(pid2, NULL, 0);
    printf("\nEspero al proceso %d\n", pid2_esperar);

    return 0;
}
