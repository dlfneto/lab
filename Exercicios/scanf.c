#include <stdio.h>

#define TAM 4
#define M_TAM(x) "\n%"#x"[^\n]"
#define M2_TAM(x) "\n%"#x"[0-9a-zA-Z ]"
#define MASK(x) M_TAM(x)
int main(){

    char vetor1[TAM+1], vetor2[TAM+1];

    printf("Insira o valor da primeira string: ");
    scanf(MASK(TAM), vetor1);

    while(getchar() != '\n') continue;

    printf("Insira o valor da segunda string: ");
    scanf(MASK(TAM), vetor2);


    printf("1: %s\n2: %s\n", vetor1, vetor2);

}