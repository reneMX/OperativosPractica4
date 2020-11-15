#include<stdio.h>
#include<string.h>

void main(int argc,char **argv){
     char cadena[50]="He sustituido a proceso lineal con pid "; 
     strcat(cadena, argv[1]);
     printf("%s\n", cadena);
     while(1);
}
