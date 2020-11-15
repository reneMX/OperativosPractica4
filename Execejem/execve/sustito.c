#include <stdio.h>
 
void main(int argc, char *argv[], char * envp[])
{
    int i;
   printf("Soy el proceso sustituo y me pasaron los siguientes argumentos\n");
  printf("Son el primer conjunto de argumentos\n");
 for (i=0; i<argc; i++){
      printf("argv[%d]=%s\n",i, argv[i]);
   }
  printf("Son el segundo conjunto de argumentos\n");
   for (i=0; envp[i]!= NULL; i++)
    {    
        printf("envp[%d]=%s\n", i, envp[i]);
    }

  while(1);
}
