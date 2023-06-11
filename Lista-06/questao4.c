#include <stdio.h>

#define TAM 3

typedef struct aluno Aluno;
struct aluno{
    float notas[2];
    float media;
};

int main(){
    Aluno alunos[TAM];
    float media_total = 0;

    for(int i = 0; i < TAM; i++){
        printf("\nAluno %d\n", i+1);
        printf("Insira a nota 1: ");
        scanf("%f", (alunos+i)->notas);
        printf("Insira a nota 2: ");
        scanf("%f", (alunos+i)->notas+1);

        (alunos+i)->media = (*((alunos+i)->notas) + *((alunos+i)->notas+1))/2;

        printf("Média do aluno %d: %.2f\n", i+1, (alunos+i)->media);

        media_total += (float) (alunos+i)->media/ (float) TAM;
    }

    printf("Média total dos alunos: %.2f\n", media_total);


    return 0;
}