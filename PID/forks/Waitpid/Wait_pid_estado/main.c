
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main (void)
{

    int pid, pid_wait, estado;


    printf("Vamos a procrear.\n");

    pid = fork();

    if (pid > 0)
    {
        printf("Yo soy el padre!!!!!.\n");
        printf("Yo soy el pid: %d, mi hijo tiene el pid: %d, y mi padre es el pid: %d.\n", getpid(), pid, getppid());
    //	sleep(20);
        return 0;

    }
    else if(pid == 0)
    {
        printf("\t\t\tYo soy el hijo!!!!.\n");
        printf("\t\t\tYo soy el pid: %d, y mi padre es el pid: %d (Porque pid vale %d)\n", getpid(), getppid(), pid);
        sleep(10);
        return 0;
    }
    else
    {
        printf("\nError\n");
        return 2;
    }

    printf("Estan terminando los programas %d.\n", pid);
    pid_wait = wait(&estado);

    printf("Listo, ya enterré a %d que me devolvió %d.\n", pid_wait, estado);
    sleep(10);

    return 0;

}
