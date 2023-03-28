#include <stdio.h>

#define TAM 15

int main(){

    float vetor[TAM] = {0}, maior = 0, menor = 0, soma = 0;

    for(int i = 0; i < TAM; i++){
        printf("Insira o %dº valor: ", i+1);
        scanf("%f", &vetor[i]);

        while(getchar() != '\n') continue;
    }

    maior = vetor[0];
    menor = vetor[0];
    for(int i = 0; i < TAM; i++){
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    soma = maior+menor;

    printf("Menor: %.2f\n", menor);
    printf("Maior: %.2f\n", maior);
    printf("A soma entre o maior e menor é: %.2f\n", soma);

    return 0;
}