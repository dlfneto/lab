#include <stdio.h>


int main(){

  int altura_jose = 150, altura_pedro = 110;

  int ano = 0;
  while(altura_jose >= altura_pedro){

    altura_jose += 2;
    altura_pedro += 3;
    ano++;

  }

  printf("Se passaram %d ano(s);\nJose tem %dcm de altura.\nPedro tem %dcm de altura.\n", ano, altura_jose, altura_pedro);
  
  return 0;
}
