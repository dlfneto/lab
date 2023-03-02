#include <stdio.h>

int main(){

    int maior = 0, menor = 0;

    while(1){

        int valor_antigo = menor;
        printf("Insira um numero: ");
        scanf("%d", &menor);

        while(getchar() != '\n') continue;

        if(menor < 0 && !(menor%2)){
            menor = valor_antigo;
            break;
        }

        if(menor > maior){
            maior = maior ^ menor;
            menor = maior ^ menor;
            maior = maior ^ menor;
        }
    }

    printf("\nO produto do maior pelo menor é %d\n\n", (maior*menor));
 
    return 0;
}
