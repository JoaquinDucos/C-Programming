#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_CHILD 5
int main(void)
{
    pid_t pidC;   //pid_t es un entero con signo
    for(int i=0; i < NUM_CHILD; i++)
    {
       pidC = fork();

       if (pidC > 0)
       {
           continue;
           //Padre
       }
       else if (pidC == 0)
       {
           //hijo
           exit(0);  //Para que los hijos no sigan creando sus hijos y así.
       }
       else
       {
           //ERROR
       }
    }
    return 0;
}
