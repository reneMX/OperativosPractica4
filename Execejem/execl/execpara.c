#include<stdio.h>
#include<unistd.h>
void main(){
      char* arg=" Sistemas Operativos";
      int z= 50;
      char * arg3= "esto es una prueba";
      char arg2[5];
      sprintf(arg2, "%d", z);
      //printf("Lo que hay en argv2 es %s", arg2);
      sleep(20);
      execl("./para", "./para", arg, arg2, arg3,  NULL );
      while(1);        
}
