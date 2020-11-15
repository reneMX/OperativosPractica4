#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
  //     El arreglo de cadenas debe terminar en  null  
        char *args[]={"./execvp","hola mundo", "89", "c", NULL}; 

        sleep(10);
	execvp(args[0],args); 
     //Despues de execvp ninguna linea se executa.  
        printf("Ending-----"); 
      
    return 0; 
} 
