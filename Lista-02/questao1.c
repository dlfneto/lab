#include <stdio.h>

int main(){

  int dia = -1;

  while(dia){

    printf("Insira o dia: ");
    scanf("%d", &dia);

    switch(dia){
      case 0:
        printf(":)\n");
        break;
      case 1:
        printf("Domingo\n");
        break;
      case 2: 
        printf("Segunda-Feira\n"); 
        break;
      case 3:
        printf("Terca-Feira\n");
        break;
      case 4:
        printf("Quarta-Feira\n");
        break;
      case 5:
        printf("Quinta-Feira\n");
        break;
      case 6:
        printf("Sexta-Feira\n");
        break;
      case 7:
        printf("Sabado\n");
        break;
      default: printf("Dia invalido!\n");
    }
  }

  return 0;
}
