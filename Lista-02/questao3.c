#include <stdio.h>

int Fatorial(int numero){
  for(int i = numero-1; i > 0; i--){
    numero = numero*i;
  }
  return (numero != 0) ? numero:1;
}

int main(){

  int numero = 0;

  printf("Insira um numero: ");
  scanf("%d", &numero);

  printf("O fatorial de %d e: %d\n", numero, Fatorial(numero));

  return 0;
}
