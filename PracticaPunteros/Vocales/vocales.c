#include <stdio.h>


int main(void) 
{ 
   char palabra[20];
   char *p = palabra; 
   int cont=0; 

   printf("\nDame una palabra: \n");
   scanf("%s", palabra); 

   while(*p != 0)
                 {
                   if(*p=='a' || *p=='A' || *p=='e' || *p=='E' || *p=='i' || *p=='I' || *p=='o' || *p=='O' || *p=='u' || *p=='U')
                           
                     
                              cont++;  
                            p++; 
                      
                            
                 }  
             
                    printf("\nEl numero de vocales es: %d\n", cont); 
                    
                
   return 0;
}
