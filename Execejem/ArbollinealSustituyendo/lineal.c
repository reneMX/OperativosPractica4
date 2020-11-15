#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    
    int idnodo, i=0, proc; 
    char pid[10]; 

    if(argc <2)
    {
        printf("faltan argumentos\n");
        exit(0);
    }

    proc = atoi(argv[1]);

    for(i = 0; i < proc-1 ; i++)
    {
        if( fork() != 0)
        {
            break;
        }
    }
    printf("Soy el proceso %d  mi padre es %d y mi i vale %d\n", (int)getpid(), (int)getppid(), i);

    sprintf( pid, "%d",(int)getpid() );
    sleep(10);

    if( i%2 == 1)
    {
        printf("Se hace sustitucion");
        execl("./sustitonodo", "./sustitonodo", pid, NULL );
    }     
    
    while(1);


}
