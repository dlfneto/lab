#include <stdio.h>

typedef struct professor Professor;
typedef struct disciplina Disciplina;

struct professor{
    char nome[256];
};
struct disciplina{
    char comp_curricular[256];
    int carga_horaria;
    Professor * professor;
};

int main(){

    Professor professor1;
    sprintf(professor1.nome, "Professor 1");

    Disciplina disciplina1;
    sprintf(disciplina1.comp_curricular, "Português");
    disciplina1.carga_horaria = 120;
    disciplina1.professor = &professor1;

    printf("+ ---------------------------------------- +\n");
    printf(" Disciplina: %s\n", disciplina1.comp_curricular);
    printf(" Professor: %s\n", disciplina1.professor->nome);
    printf(" Carga Horária: %dH\n", disciplina1.carga_horaria);
    printf("+ ---------------------------------------- +\n");

    return 0;
}