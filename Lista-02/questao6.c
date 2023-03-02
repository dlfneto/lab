#include <stdio.h>

int main(){

  int votos_paulo = 0,
      votos_renata = 0,
      votos_brancos = 0,
      votos_nulos = 0,
      votos_total = 0;

  
  while(1){

    int voto = 0;
    printf("\nInsira sua opção de voto: ");
    scanf("%d", &voto);
    while ((getchar()) != '\n');

    if(voto < 0) break;

    switch(voto){
      case 0:
        printf("Voto branco. Digite (1) para confimar: ");
        if(getchar() != '1') continue;
        votos_brancos++;
        break;
      case 5:
        printf("Voto no candidato Paulo. Digite (1) para confirmar: ");
        if(getchar() != '1') continue;
        votos_paulo++;
        break;
      case 7:
        printf("Voto na candidata Renata. Digite (1) para confirmar: ");
        if(getchar() != '1') continue;
        votos_renata++;
        break;
      default: 
        printf("Voto nulo. Digite (1) para confirmar: ");
        if(getchar() != '1') continue;
        votos_nulos++;
    }

    while ((getchar()) != '\n');
    printf("Voto computado!\n");
  }

  votos_total = votos_nulos+votos_renata+votos_paulo+votos_brancos;

  if(votos_total <= 0){
    printf("Nenhum voto computado.\n");
    return 0;
  }

  printf("\n\nTotal de votos: %d\n", votos_total);
  printf("Porcentagem de votos no candidato Paulo: %.2f%%\n", ((float) votos_paulo/votos_total)*100);
  printf("Porcentagem de votos na candidata Renata: %.2f%%\n", ((float) votos_renata/votos_total)*100);

  printf("Porcentagem de votos brancos: %.2f%%\n", ((float) votos_brancos/votos_total)*100);
  printf("Porcentagem de votos nulos: %.2f%%\n", ((float) votos_nulos/votos_total)*100);

  return 0;
}
