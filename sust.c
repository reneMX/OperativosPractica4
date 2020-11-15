#include<stdio.h>
#include<string.h>
void main(int argc, char **argv){

    char cad[40] = "Ya remplaze a uno de tus inutiles hijos";
    strcat(cad,argv[1]);
    printf("%s\n", cad);
    while(1);



}//fin main