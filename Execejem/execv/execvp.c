#include<stdio.h> 
#include<unistd.h> 
  
int main(int c, char**argv) 
{ 
    int i; 
      
    printf("Hola yo soy el sustito creado por  execvp() y me han pasado %d argumentos\n ", c); 
    for (i=0; i<c; i++){
	printf("argumento[%d]=%s\n", i, argv[i]);
    }
    printf("\n"); 
   while(1);   
    return 0; 
} 
