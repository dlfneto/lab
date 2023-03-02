#include <stdio.h>


int main(){

  int numero = 1,  menor = 0, maior = 0;
  while(numero != 0){
    printf("Insira um numero: ");
    scanf("%d", &numero);

    if(numero != 0){
      menor = (menor == 0 || numero < menor) ? numero : menor;
      maior = (numero > maior) ? numero : maior;
    }
  }
  printf("O menor numero informado foi %d\n", menor);
  printf("O maior numero informado foi %d\n", maior);
  
  return 0;
}
