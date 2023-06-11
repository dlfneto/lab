#include <stdio.h>

typedef struct aluno Aluno;
struct aluno{
    float notas[2];
    float media;
};

int main(){
    Aluno aluno1;

    printf("Insira a nota 1: ");
    scanf("%f", aluno1.notas);
    printf("Insira a nota 2: ");
    scanf("%f", aluno1.notas+1);

    aluno1.media = (*(aluno1.notas) + *(aluno1.notas+1))/2;

    printf("Média do aluno: %.2f\n", aluno1.media);

    return 0;
}