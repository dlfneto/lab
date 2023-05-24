#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[50];
    float * notas;
} Aluno;


Aluno create_aluno(char *, float *, int);
void print_aluno(Aluno, int);

int main(int argc, char **argv){

    int total_notas = 0;
    int total_alunos = 0;

    if(argc != 3){
        fprintf(stderr, "Use: %s <total de alunos> <numero de notas>\n", *argv);
        return 1;
    }

    total_alunos = atoi(*(argv+1));
    total_notas = atoi(*(argv+2));

    Aluno * alunos = (Aluno *) malloc(sizeof(Aluno) * total_alunos);

    char nome[50];
    float * notas = (float *) malloc(sizeof(float) * total_notas);
    for(int i = 0; i < total_alunos; i++){
        printf("Aluno (a): ");
        scanf("\n%49[^\n]", nome);

        for(int j = 0; j < total_notas; j++){
            while(getchar() != '\n') continue;
            printf("Entre com a %dº nota: ", j+1);
            scanf(" %f", notas+j);
        }

        while(getchar() != '\n') continue;
        alunos[i] = create_aluno(nome, notas, total_notas);
    }


    printf("\n\nLista de Alunos: \n");
    for(int i = 0; i < total_alunos; i++)
        print_aluno(alunos[i], total_notas);

    return 0;
}

Aluno create_aluno(char * nome, float * notas, int max_notas){
    Aluno aluno;

    aluno.notas = (float *) malloc(sizeof(float)*max_notas);

    sprintf(aluno.nome, "%s", nome);

    for(int i = 0; i < max_notas; i++)
        aluno.notas[i] = notas[i];

    return aluno;
}
void print_aluno(Aluno aluno, int total_notas){
    printf("\n+---------------------------------+\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Notas: \n");

    float mf = 0;
    for(int i = 0; i < total_notas; i++) mf += aluno.notas[i]/total_notas;

    for(int i = 0; i < total_notas; i++){
        printf("N%d: %.2f", i+1, aluno.notas[i]);
        if(i == 0)
            printf("\tMédia Final: %.2f\t", mf);
        printf("\n");
    }
    printf("+---------------------------------+\n");
}