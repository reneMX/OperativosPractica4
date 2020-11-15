#include<stdio.h>
#include<string.h>

void main(int argc,char **argv){
     char cadena[50]="Hola mundo "; 
     strcat(cadena, argv[1]);
     strcat(cadena, " ");
     strcat(cadena, argv[2]);
     strcat(cadena, " ");
     strcat(cadena, argv[3]);
     printf("%s\n", cadena);
     while(1);
}
