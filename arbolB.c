//Includes
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


//Principal
int main(int argc,char * argv[]){

    //Variables
    int nivel;
    pid_t pid1;
    pid_t pid2;
    int i;
    char pid[10]; 


    //guardamos el nivel
    nivel = atoi(argv[1]) - 1;
    //validacion de argumentos al momento de llamar al ajecutable ./arbolB
    if(argc != 2)
    {
        printf("El numero de argumentos es incorrecto\n");
        return 0;
    }

    for(i = 0; i < nivel; i++)
    {
        
        if( (pid1 = fork()) != 0)
        {
            if( (pid2 = fork()) != 0)
            break;
        }
    }
    printf("Soy el proceso %d  mi padre es %d y mi i vale %d\n", (int)getpid(), (int)getppid(), i);


    sprintf( pid, "%d",(int)getpid() );
    sleep(10);

    if( i%2 == 1)
    {
        execl("./sust", "./sust",pid, NULL);
    }

    while(1);
    return  0;
}