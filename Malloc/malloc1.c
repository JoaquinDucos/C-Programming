#include <stdio.h>
#include <stdlib.h>

int arreglo(int *p, int tam);

int main(void) 
              {

                   int num[] = {1, 2, 3, 4, 5, 6, 7, -9};
                   int tam = sizeof(num) / sizeof (int);
                    
                   arreglo(num, tam);
                   
                   return 0;
              }


int arreglo(int *p, int tam)
                            {
                                int i;
                                for (i = 0; i < tam; i++)
                                   {
                                      printf("%d", p[i]);
                                   }
                                   printf("\n");
                                   return i;
                            }    

