#include <stdio.h>
#include <unistd.h>
int main(void) {
  printf("Programa principa\n");
  char* argv[] = { "100", "mensaje", NULL };
  char* envp[] = { "algo", "12.80", NULL };
  sleep(10);
  execve("./sustito", argv, envp); 
  return 1;
}
